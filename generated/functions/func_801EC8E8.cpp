#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC8E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EC8E8;

loc_801EC8E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r13 + -24272));
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801EC91C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC944;
    }
}

loc_801EC920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EC930;
    }
}

loc_801EC924:
{
}

loc_801EC928:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801EC93C;
    }
}

loc_801EC92C:
{
    goto loc_801EC944;
}

loc_801EC930:
{
}

loc_801EC934:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_801EC944;
    }
}

loc_801EC938:
{
    goto loc_801EC94C;
}

loc_801EC93C:
{
    r30 = -39;
    goto loc_801EC984;
}

loc_801EC944:
{
    r30 = -28;
    goto loc_801EC984;
}

loc_801EC94C:
{
    r31 = 0x80350000u;
    r31 = (r31 + 29216);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801EC95C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801EC968;
    }
}

loc_801EC960:
{
    r30 = -10;
    goto loc_801EC984;
}

loc_801EC968:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801EC970:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EC97C;
    }
}

loc_801EC974:
{
    r30 = 0x80000000u;
    goto loc_801EC984;
}

loc_801EC97C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWrite32(r28, r0);
}

loc_801EC984:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801EC988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC9A4;
    }
}

loc_801EC98C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EC994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC9A0;
    }
}

loc_801EC998:
{
    MemoryInline::FlatWrite32((r3 + 780), r30);
    goto loc_801EC9A4;
}

loc_801EC9A0:
{
    MemoryInline::FlatWrite32((r13 + -24268), r30);
}

loc_801EC9A4:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000201B gpr_write=0xF000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EC8E8 func_801EC8E8 preserves=true fpr_mask=0x00000000
