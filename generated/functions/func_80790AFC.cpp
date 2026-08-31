#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80790AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80790AFC;

loc_80790AFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 23872);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    r3 = (r31 + 12104);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->lr = 0x80790B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r31 = (r31 + 12104);
    r4 = 0x808A0000u;
    r3 = (r31 + 116);
    r4 = (r4 + 23096);
    ctx->lr = 0x80790B38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808A0000u;
    r3 = (r31 + 232);
    r4 = (r4 + 21384);
    ctx->lr = 0x80790B48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 348);
    r4 = (r4 + 7992);
    ctx->lr = 0x80790B58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 464);
    r4 = (r4 + 9760);
    ctx->lr = 0x80790B68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808A0000u;
    r3 = (r31 + 580);
    r4 = (r4 + 23348);
    ctx->lr = 0x80790B78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 696);
    r4 = (r4 + 9976);
    ctx->lr = 0x80790B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808A0000u;
    r3 = (r31 + 812);
    r4 = (r4 + 22244);
    ctx->lr = 0x80790B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 928);
    r4 = (r4 + 8168);
    ctx->lr = 0x80790BA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808A0000u;
    r3 = (r31 + 1044);
    r4 = (r4 + 21636);
    ctx->lr = 0x80790BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 1160);
    r4 = (r4 + 7632);
    ctx->lr = 0x80790BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 1276);
    r4 = (r4 + 9400);
    ctx->lr = 0x80790BD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 1392);
    r4 = (r4 + 8344);
    ctx->lr = 0x80790BE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808D0000u;
    r3 = (r31 + 1508);
    r4 = (r4 + 7816);
    ctx->lr = 0x80790BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = 0x808A0000u;
    r3 = (r31 + 1624);
    r4 = (r4 + 24084);
    ctx->lr = 0x80790C08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80790E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r30 = 0;
}

loc_80790C0C:
{
    r12 = MemoryInline::FlatRead32((r31 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80790C14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80790C30;
    }
}

loc_80790C18:
{
    r3 = 0;
    r4 = 0;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x80790C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80790C34;
}

loc_80790C30:
{
    r3 = 0;
}

loc_80790C34:
{
    r30 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 40), r3);
}

loc_80790C40:
{
    r31 = (r31 + 116);
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(15))) {
        goto loc_80790C0C;
    }
}

loc_80790C48:
{
    // inline leaf 0x80790E1C (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead8((r3 + 14524));
    // end of inlined leaf 0x80790E1C
}

loc_80790C50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80790C9C;
    }
}

loc_80790C54:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = (r3 + 12104);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 88), 0, 1625u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 88), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r3 + 204), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 232u, (r3 + 320), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 348u, (r3 + 436), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 464u, (r3 + 552), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 580u, (r3 + 668), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 696u, (r3 + 784), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 812u, (r3 + 900), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 928u, (r3 + 1016), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1044u, (r3 + 1132), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1160u, (r3 + 1248), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1276u, (r3 + 1364), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1392u, (r3 + 1480), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1508u, (r3 + 1596), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1624u, (r3 + 1712), static_cast<uint8_t>(r0));
}

loc_80790C9C:
{
    // inline leaf 0x80790E30 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 12088));
    // end of inlined leaf 0x80790E30
    // inline leaf 0x80790E28 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 352));
    // end of inlined leaf 0x80790E28
}

loc_80790CA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80790CF4;
    }
}

loc_80790CAC:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = (r3 + 12104);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 1628u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 4), r0);
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 120), r0);
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r3 + 236), r0);
    MemoryInline::WriteResolved32(guest_range_1, 348u, (r3 + 352), r0);
    MemoryInline::WriteResolved32(guest_range_1, 464u, (r3 + 468), r0);
    MemoryInline::WriteResolved32(guest_range_1, 580u, (r3 + 584), r0);
    MemoryInline::WriteResolved32(guest_range_1, 696u, (r3 + 700), r0);
    MemoryInline::WriteResolved32(guest_range_1, 812u, (r3 + 816), r0);
    MemoryInline::WriteResolved32(guest_range_1, 928u, (r3 + 932), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1044u, (r3 + 1048), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1160u, (r3 + 1164), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1276u, (r3 + 1280), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1392u, (r3 + 1396), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1508u, (r3 + 1512), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1624u, (r3 + 1628), r0);
}

loc_80790CF4:
{
    r30 = 0;
    // inline leaf 0x80790E3C (9 guest instruction(s))
}

loc_inl3_0x80790E3C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r3 + 40));
}

loc_inl3_0x80790E4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80790E58;
    }
}

loc_inl3_0x80790E50:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_inl3_cont_80790E3C;
}

loc_inl3_0x80790E58:
{
    r3 = 0;
}

loc_inl3_cont_80790E3C:
{
    // end of inlined leaf 0x80790E3C
    r31 = (r3 & 65535);
    goto loc_80790D6C;
}

loc_80790D04:
{
    r3 = (r30 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80790E6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    // inline leaf 0x80790E60 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80790E60
    r0 = (r3 & 65535);
}

loc_80790D18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(427))) {
        goto loc_80790D68;
    }
}

loc_80790D1C:
{
    // inline leaf 0x807AEB68 (3 guest instruction(s))
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23812));
    // end of inlined leaf 0x807AEB68
    r31 = 0x809C0000u;
    r31 = (r31 + 12104);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 68), f0.d);
    // inline leaf 0x807AEB74 (3 guest instruction(s))
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23988));
    // end of inlined leaf 0x807AEB74
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 72), f0.d);
    // inline leaf 0x807AEB80 (3 guest instruction(s))
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23988));
    // end of inlined leaf 0x807AEB80
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 76), f0.d);
    // inline leaf 0x807AEB8C (3 guest instruction(s))
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 23988));
    // end of inlined leaf 0x807AEB8C
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 80), f0.d);
    goto loc_80790D78;
}

loc_80790D68:
{
    r30 = (r30 + 1);
}

loc_80790D6C:
{
    r0 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_80790D74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80790D04;
    }
}

loc_80790D78:
{
    // inline leaf 0x807BD6E4 (13 guest instruction(s))
}

loc_inl9_0x807BD6E4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
}

loc_inl9_0x807BD6F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x807BD6FC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 6392));
    r0 = MemoryInline::FlatRead8((r4 + 36));
}

loc_inl9_0x807BD70C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x807BD710:
{
    r3 = 1;
    goto loc_inl9_cont_807BD6E4;
}

loc_inl9_return:
{
}

loc_inl9_cont_807BD6E4:
{
    // end of inlined leaf 0x807BD6E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80790D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80790E04;
    }
}

loc_80790D84:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 1628u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 1628u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r3 + 124));
    MemoryInline::WriteResolved32(guest_range_3, 116u, (r3 + 120), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 232u, (r3 + 240));
    MemoryInline::WriteResolved32(guest_range_3, 232u, (r3 + 236), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 348u, (r3 + 356));
    MemoryInline::WriteResolved32(guest_range_3, 348u, (r3 + 352), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 464u, (r3 + 472));
    MemoryInline::WriteResolved32(guest_range_3, 464u, (r3 + 468), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 580u, (r3 + 588));
    MemoryInline::WriteResolved32(guest_range_3, 580u, (r3 + 584), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 696u, (r3 + 704));
    MemoryInline::WriteResolved32(guest_range_3, 696u, (r3 + 700), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 812u, (r3 + 820));
    MemoryInline::WriteResolved32(guest_range_3, 812u, (r3 + 816), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 928u, (r3 + 936));
    MemoryInline::WriteResolved32(guest_range_3, 928u, (r3 + 932), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1044u, (r3 + 1052));
    MemoryInline::WriteResolved32(guest_range_3, 1044u, (r3 + 1048), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1160u, (r3 + 1168));
    MemoryInline::WriteResolved32(guest_range_3, 1160u, (r3 + 1164), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1276u, (r3 + 1284));
    MemoryInline::WriteResolved32(guest_range_3, 1276u, (r3 + 1280), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1392u, (r3 + 1400));
    MemoryInline::WriteResolved32(guest_range_3, 1392u, (r3 + 1396), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1508u, (r3 + 1516));
    MemoryInline::WriteResolved32(guest_range_3, 1508u, (r3 + 1512), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 1624u, (r3 + 1632));
    MemoryInline::WriteResolved32(guest_range_3, 1624u, (r3 + 1628), r0);
}

loc_80790E04:
{
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80790AFC func_80790AFC preserves=true fpr_mask=0x00000000
