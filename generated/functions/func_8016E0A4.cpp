#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016E0A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016E0A4;

loc_8016E0A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_0 & 1);
}

loc_8016E0B0:
{
    MemoryInline::FlatWrite32(r5, r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8016E0CC;
    }
}

loc_8016E0B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_8016E0C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016E0CC;
    }
}

loc_8016E0C4:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_8016E0CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_3 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8016E0D8:
{
    MemoryInline::FlatWrite32(r6, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016E10C;
    }
}

loc_8016E0E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016E0F0;
    }
}

loc_8016E0E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8016E0E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016E0FC;
    }
}

loc_8016E0EC:
{
    goto loc_8016E10C;
}

loc_8016E0F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8016E0F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016E10C;
    }
}

loc_8016E0F8:
{
    goto loc_8016E104;
}

loc_8016E0FC:
{
    r0 = 6;
    goto loc_8016E110;
}

loc_8016E104:
{
    r0 = 14;
    goto loc_8016E110;
}

loc_8016E10C:
{
    r0 = 0;
}

loc_8016E110:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000E9 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016E0A4 func_8016E0A4 preserves=true fpr_mask=0x00000000
