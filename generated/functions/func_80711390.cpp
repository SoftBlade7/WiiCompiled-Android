#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80711390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80711390;

loc_80711390:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 9000));
    r4 = MemoryInline::FlatRead32((r4 + 28));
}

loc_807113A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807113D0;
    }
}

loc_807113A4:
{
    r4 = MemoryInline::FlatRead32(r4);
}

loc_807113AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807113B8;
    }
}

loc_807113B0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807113BC;
}

loc_807113B8:
{
    r0 = -1;
}

loc_807113BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(84));
}

loc_807113C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807113C4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(207));
}

loc_807113C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807113D0;
    }
}

loc_807113CC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_807113D0:
{
    r4 = 0x809C0000u;
    r7 = MemoryInline::FlatRead8((r3 + 78));
    r5 = MemoryInline::FlatRead32((r4 + -10448));
    r6 = 0;
    goto loc_80711400;
}

loc_807113E4:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807113F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807113FC:
{
    r6 = (r6 + 1);
}

loc_80711400:
{
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_80711408:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807113E4;
    }
}

loc_8071140C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 79), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80711390 func_80711390 preserves=true fpr_mask=0x00000000
