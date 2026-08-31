#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800527A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800527A0;

loc_800527A0:
{
    r6 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800527A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800527AC:
{
    r7 = MemoryInline::FlatRead32((r6 + 8));
    r3 = 0;
    r5 = 0;
}

loc_800527BC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800527D0;
    }
}

loc_800527C0:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
}

loc_800527C8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_800527D0;
    }
}

loc_800527CC:
{
    r5 = 1;
}

loc_800527D0:
{
}

loc_800527D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800527E4;
    }
}

loc_800527D8:
{
}

loc_800527DC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_800527E4;
    }
}

loc_800527E0:
{
    r3 = 1;
}

loc_800527E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800527E8:
{
    r3 = 9;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052804;
    }
}

loc_800527F0:
{
    r5 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r6 + r7);
    r4 = (r4 * r5);
    r4 = (r4 + r0);
    goto loc_80052808;
}

loc_80052804:
{
    r4 = 0;
}

loc_80052808:
{
    r5 = MemoryInline::FlatRead8((r6 + 29));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800527A0 func_800527A0 preserves=true fpr_mask=0x00000000
