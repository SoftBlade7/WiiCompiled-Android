#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801773D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801773D0;

loc_801773D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
}

loc_801773EC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801773FC;
    }
}

loc_801773F4:
{
    r4 = 0;
    goto loc_80177410;
}

loc_801773FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = 2;
}

loc_80177408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80177410;
    }
}

loc_8017740C:
{
    r4 = 1;
}

loc_80177410:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80177414:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80177448;
    }
}

loc_80177418:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r31 + 44));
    ctx->lr = 0x80177428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198CA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = 0x80340000u;
    r4 = r3;
    r3 = (r30 + 18752);
    r5 = 32;
    // inline leaf 0x80199BB8 (7 guest instruction(s))
    r6 = (r2 + -26432);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r6);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x80199BB8
    r0 = (r30 + 18752);
    r3 = 0x80290000u;
    MemoryInline::FlatWriteRam32((r3 + -21020), r0);
}

loc_80177448:
{
    r5 = MemoryInline::FlatRead32((r31 + 60));
}

loc_80177450:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8017745C;
    }
}

loc_80177454:
{
    r3 = 0;
    goto loc_80177470;
}

loc_8017745C:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r3 = 2;
}

loc_80177468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80177470;
    }
}

loc_8017746C:
{
    r3 = 1;
}

loc_80177470:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80177474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801774AC;
    }
}

loc_80177478:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80177488;
    }
}

loc_8017747C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80177480:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80177494;
    }
}

loc_80177484:
{
    goto loc_801774D0;
}

loc_80177488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8017748C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801774D0;
    }
}

loc_80177490:
{
    goto loc_801774C0;
}

loc_80177494:
{
    r0 = MemoryInline::FlatRead32((r31 + 60));
    r4 = 0x80340000u;
    r3 = 0x80290000u;
    MemoryInline::FlatWriteRam32((r4 + 18848), r5);
    MemoryInline::FlatWriteRam32((r3 + -21020), r0);
    goto loc_801774D0;
}

loc_801774AC:
{
    r4 = 0x80290000u;
    r3 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r4 + -21020));
    MemoryInline::FlatWriteRam32((r3 + 18848), r0);
    goto loc_801774D0;
}

loc_801774C0:
{
    r4 = 0x80340000u;
    r3 = 0x80290000u;
    r0 = MemoryInline::FlatRead32((r4 + 18848));
    MemoryInline::FlatWriteRam32((r3 + -21020), r0);
}

loc_801774D0:
{
    r3 = 0x80290000u;
    r4 = 1872;
    r3 = MemoryInline::FlatRead32((r3 + -21020));
    ctx->lr = 0x801774E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801774E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801774FC;
    }
}

loc_801774E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801774F4;
    }
}

loc_801774EC:
{
    r4 = r31;
    ctx->lr = 0x801774F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80177798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801774F4:
{
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r4 + 18768), r3);
}

loc_801774FC:
{
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 18768));
    ctx->lr = 0x80177508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80177908u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801773D0 func_801773D0 preserves=true fpr_mask=0x00000000
