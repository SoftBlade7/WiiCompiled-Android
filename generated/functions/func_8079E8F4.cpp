#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079E8F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079E8F4;

loc_8079E8F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r3 + 124), r0);
}

loc_8079E924:
{
    r0 = MemoryInline::FlatRead32((r29 + 156));
}

loc_8079E92C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E970;
    }
}

loc_8079E930:
{
    r3 = (r0 + r31);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079E944:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079E954;
    }
}

loc_8079E948:
{
}

loc_8079E94C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8079E954;
    }
}

loc_8079E950:
{
    r0 = 0;
}

loc_8079E954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E964;
    }
}

loc_8079E95C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8079E968;
}

loc_8079E964:
{
    r3 = 0;
}

loc_8079E968:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8079E970:
{
    r0 = MemoryInline::FlatRead32((r29 + 168));
}

loc_8079E978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079E9BC;
    }
}

loc_8079E97C:
{
    r3 = (r0 + r31);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079E990:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079E9A0;
    }
}

loc_8079E994:
{
}

loc_8079E998:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8079E9A0;
    }
}

loc_8079E99C:
{
    r0 = 0;
}

loc_8079E9A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079E9A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079E9B0;
    }
}

loc_8079E9A8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8079E9B4;
}

loc_8079E9B0:
{
    r3 = 0;
}

loc_8079E9B4:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072930u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8079E9BC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8079E9C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079E924;
    }
}

loc_8079E9CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079E8F4 func_8079E8F4 preserves=true fpr_mask=0x00000000
