#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000AB88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000AB88;

loc_8000AB88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8000AB94:
{
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8000ABAC;
    }
}

loc_8000ABA8:
{
    r5 = MemoryInline::FlatRead32((r3 + 176));
}

loc_8000ABAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000ABB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AC3C;
    }
}

loc_8000ABB4:
{
    r4 = MemoryInline::FlatRead32((r13 + -32748));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000ABBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AC20;
    }
}

loc_8000ABC0:
{
    r3 = MemoryInline::FlatRead32((r13 + -27648));
    r7 = (r1 + 8);
    r6 = 0;
    r8 = 0;
    ctx->lr = 0x8000ABD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000B370u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000ABD8:
{
    MemoryInline::FlatWrite32((r31 + 148), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AC08;
    }
}

loc_8000ABE0:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = 0;
    // inline leaf 0x802267C4 (11 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -23992));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -24000));
    r3 = (r3 * 20);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r3 = MemoryInline::FlatRead32((r13 + -23992));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -23992), r0);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    // end of inlined leaf 0x802267C4
    r3 = 0x80240000u;
    r4 = MemoryInline::FlatRead32((r13 + -32748));
    r3 = (r3 + 24124);
    r3 = (r3 + 185);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000AC04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8000AC20;
}

loc_8000AC08:
{
    r3 = 0x80240000u;
    r4 = MemoryInline::FlatRead32((r13 + -32748));
    r3 = (r3 + 24124);
    r3 = (r3 + 219);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000AC20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000AC20:
{
    r3 = MemoryInline::FlatRead32((r31 + 136));
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 140));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 144));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8000AC3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000AB88 func_8000AB88 preserves=true fpr_mask=0x00000000
