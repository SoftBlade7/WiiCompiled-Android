#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80649FD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80649FD8;

loc_80649FD8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(121));
}

loc_80649FEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064A010;
    }
}

loc_80649FF0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -26808));
    r4 = 65;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r5 = 0;
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8064A010:
{
    r4 = MemoryInline::FlatRead32((r3 + 392));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8064A01C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064A028;
    }
}

loc_8064A020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8064A024:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8064A028:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -26808));
    r4 = 65;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r5 = 0;
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDF gpr_write=0x00001031 gpr_return=0x00000010 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80649FD8 func_80649FD8 preserves=true fpr_mask=0x00000000
