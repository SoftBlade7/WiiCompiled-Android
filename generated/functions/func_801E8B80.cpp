#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E8B80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E8B80;

loc_801E8B80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801E8B8C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8BA4;
    }
}

loc_801E8B9C:
{
    r3 = -3;
    goto loc_801E8BE4;
}

loc_801E8BA4:
{
    r3 = r4;
    r4 = r6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801938F8u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E8BB4:
{
    MemoryInline::FlatWrite32(r31, r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E8BE0;
    }
}

loc_801E8BBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_801E8BC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8BCC;
    }
}

loc_801E8BC4:
{
    r3 = -29;
    goto loc_801E8BE4;
}

loc_801E8BCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-8));
}

loc_801E8BD0:
{
    r3 = -42;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8BE4;
    }
}

loc_801E8BD8:
{
    r3 = -26;
    goto loc_801E8BE4;
}

loc_801E8BE0:
{
    r3 = 0;
}

loc_801E8BE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E8B80 func_801E8B80 preserves=true fpr_mask=0x00000000
