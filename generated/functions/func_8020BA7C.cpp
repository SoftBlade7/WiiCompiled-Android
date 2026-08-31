#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020BA7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020BA7C;

loc_8020BA7C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = r3;
    r5 = 32;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(86));
}

loc_8020BAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020BAC8;
    }
}

loc_8020BAA4:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(70));
}

loc_8020BAAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020BAC8;
    }
}

loc_8020BAB0:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(70));
}

loc_8020BAB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020BAC8;
    }
}

loc_8020BABC:
{
    r0 = MemoryInline::FlatRead8((r1 + 11));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_8020BAC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020BAD0;
    }
}

loc_8020BAC8:
{
    r3 = 0;
    goto loc_8020BAD4;
}

loc_8020BAD0:
{
    r3 = 1;
}

loc_8020BAD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001CB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020BA7C func_8020BA7C preserves=true fpr_mask=0x00000000
