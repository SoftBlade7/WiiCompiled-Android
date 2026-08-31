#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001D5B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001D5B4;

loc_8001D5B4:
{
    r9 = 0;
    r7 = 0;
    goto loc_8001D600;
}

loc_8001D5C0:
{
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r8 = MemoryInline::FlatRead8(r4);
}

loc_8001D5CC:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(2176))) {
        goto loc_8001D5D8;
    }
}

loc_8001D5D0:
{
    r7 = 769;
    goto loc_8001D5F8;
}

loc_8001D5D8:
{
    r6 = (r3 + r7);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite8((r6 + 12), static_cast<uint8_t>(r8));
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8001D5F8:
{
    r9 = (r9 + 1);
    r4 = (r4 + 1);
}

loc_8001D600:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8001D604:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001D610;
    }
}

loc_8001D608:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r5));
}

loc_8001D60C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001D5C0;
    }
}

loc_8001D610:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001D5B4 func_8001D5B4 preserves=true fpr_mask=0x00000000
