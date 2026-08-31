#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80544310_statefree(uint32_t, uint32_t);
extern "C" void func_805444E8_statefree(uint32_t);
extern "C" void func_8054454C_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545DB0_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545DE8_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545E20_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545E58_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545E90_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545EC8_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545F00_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545F38_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545FC4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80545FFC_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80546034_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8054606C_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805460A4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805460DC_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805461BC_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_805461FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80546244_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8054628C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805462D4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_805462F4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80546358_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80546374_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80546388_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_805463AC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_805463C0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_805463E4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_805463F8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_8054641C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80546430_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_80546454_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80546468_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8054648C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_805464A0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80546734_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80546744_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8054677C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_805467A8_statefree(uint32_t, uint32_t);

extern "C" void func_80544D40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80544D40;

loc_80544D40:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 272);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 252u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_4, 256u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_4, 260u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_4, 264u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_4, 268u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r30 = r4;
    r29 = r3;
    r31 = r5;
    // inline leaf 0x80544D10 (12 guest instruction(s))
    r6 = 65536;
    r5 = 1380646912;
    r0 = (r6 + -29504);
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r4 * r0);
    r0 = (r5 + 20548);
    r3 = (r6 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80544D10
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80544D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805455B0;
    }
}

loc_80544D74:
{
    r3 = r31;
    // inline leaf 0x80545658 (1 guest instruction(s))
    // end of inlined leaf 0x80545658
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->lr = 0x80544D8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805455E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 40);
    // inline leaf 0x8054565C (21 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r11 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + 48), 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r11 + 48));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r11 + 49));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r11 + 50));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r11 + 51));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r11 + 52));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r11 + 53));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r11 + 54));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r11 + 55));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8054565C
    r3 = r31;
    r4 = (r1 + 40);
    // inline leaf 0x805456B0 (17 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    r10 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r4 + 4));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r4 + 5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r4 + 7));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 22), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r3 + 22), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 23), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 24), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 25), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 26), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 27), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 28), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 29), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805456B0
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 104);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805456F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = r31;
    r4 = (r1 + 104);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80545798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = r31;
    // inline leaf 0x80545854 (2 guest instruction(s))
    r3 = (r3 + 22984);
    // end of inlined leaf 0x80545854
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545830u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = 0;
}

loc_80544DE0:
{
    r28 = 0;
}

loc_80544DE4:
{
    r3 = r31;
    r4 = r27;
    r5 = r28;
    // inline leaf 0x80545934 (6 guest instruction(s))
    r4 = (r4 * 896);
    r0 = (r5 * 112);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 32);
    // end of inlined leaf 0x80545934
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r27;
    r7 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8054585Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(8));
}

loc_80544E14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544DE4;
    }
}

loc_80544E18:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(4));
}

loc_80544E20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544DE0;
    }
}

loc_80544E24:
{
    r28 = 0;
}

loc_80544E28:
{
    r27 = 0;
}

loc_80544E2C:
{
    r3 = r31;
    r4 = r28;
    r5 = (r27 & 255);
    // inline leaf 0x80545A00 (6 guest instruction(s))
    r4 = (r4 * 3200);
    r0 = (r5 * 100);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 3616);
    // end of inlined leaf 0x80545A00
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r28;
    r7 = (r27 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8054594Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(32));
}

loc_80544E5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544E2C;
    }
}

loc_80544E60:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(6));
}

loc_80544E68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544E28;
    }
}

loc_80544E6C:
{
    r27 = 0;
}

loc_80544E70:
{
    r3 = r31;
    r4 = (r27 & 255);
    // inline leaf 0x80545A94 (4 guest instruction(s))
    r0 = (r4 * 28);
    r3 = (r3 + r0);
    r3 = (r3 + 22816);
    // end of inlined leaf 0x80545A94
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r27;
    // inline leaf 0x80545A18 (31 guest instruction(s))
}

loc_inl9_0x80545A18:
{
    r7 = 65536;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    r0 = (r7 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = (r3 + 8);
    r7 = (r0 + r6);
    r3 = MemoryInline::FlatRead16((r7 + 21956));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r0 = (r0_rot_2 & 1);
}

loc_inl9_0x80545A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x80545A88;
    }
}

loc_inl9_0x80545A40:
{
    r5 = MemoryInline::FlatRead32((r7 + 21952));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r6 = (r6_rot_3 & 127);
    r0 = MemoryInline::FlatRead16((r7 + 21958));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 7);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r8 = (r8_rot_2 & 1023);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r9 = (r9_rot_2 & 127);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r10 = (r10_rot_2 & 127);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r5 = (r5_rot_2 & 63);
    r7 = 1;
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r4 + 10), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_5, 0u, (r4 + 4), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r4 + 6), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r4 + 8), static_cast<uint16_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r4 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r4 + 16), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r4 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r4 + 24), r0);
    }
    goto loc_inl9_cont_80545A18;
}

loc_inl9_0x80545A88:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
}

loc_inl9_cont_80545A18:
{
    // end of inlined leaf 0x80545A18
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(6));
}

loc_80544E98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544E70;
    }
}

loc_80544E9C:
{
    r3 = (r1 + 80);
    // inline leaf 0x80544460 (9 guest instruction(s))
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 15500);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    // end of inlined leaf 0x80544460
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 80);
    // inline leaf 0x80545AA4 (13 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r7 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r7 + 56));
    r5 = MemoryInline::FlatRead32((r7 + 60));
    r3 = MemoryInline::FlatRead32((r7 + 64));
    r0 = MemoryInline::FlatRead32((r7 + 68));
    MemoryInline::FlatWriteRam32((r4 + 4), r6);
    MemoryInline::FlatWriteRam32((r4 + 8), r5);
    MemoryInline::FlatWriteRam32((r4 + 12), r3);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    // end of inlined leaf 0x80545AA4
    r3 = r31;
    r4 = (r1 + 80);
    // inline leaf 0x80545AD8 (10 guest instruction(s))
    r7 = (r3 + 65536);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite32((r7 + -28676), r6);
    MemoryInline::FlatWrite32((r7 + -28672), r5);
    MemoryInline::FlatWrite32((r7 + -28668), r3);
    MemoryInline::FlatWrite32((r7 + -28664), r0);
    // end of inlined leaf 0x80545AD8
    r3 = (r1 + 80);
    r4 = -1;
    ctx->lr = 0x80544ECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80544484u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 24);
    // inline leaf 0x80545B00 (7 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x80545B00
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r3 = r31;
    // inline leaf 0x80545B1C (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28064), r4);
    // end of inlined leaf 0x80545B1C
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 24);
    // inline leaf 0x80545B28 (7 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x80545B28
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r3 = r31;
    // inline leaf 0x80545B44 (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28060), r4);
    // end of inlined leaf 0x80545B44
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545B5C (10 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 242));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r3 = (r3_rot_4 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x80545B5C
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545B50 (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -28056), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80545B50
    r27 = 0;
}

loc_80544F20:
{
    r3 = (r1 + 20);
    // inline leaf 0x805444C4 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x805444C4
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r6 = r27;
    r4 = (r1 + 20);
    // inline leaf 0x80545B84 (9 guest instruction(s))
    r7 = 65536;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r7 + -29504);
    r5 = (r5 * r6);
    r3 = (r3 + r5);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x80545B84
    r3 = r31;
    r5 = r27;
    r4 = (r1 + 20);
    // inline leaf 0x80545BA8 (6 guest instruction(s))
    r3 = (r3 + 65536);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + -28660), r0);
    // end of inlined leaf 0x80545BA8
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(2));
}

loc_80544F54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80544F20;
    }
}

loc_80544F58:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545BCC (7 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 452));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80545BCC
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545BC0 (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -27752), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80545BC0
    r3 = (r1 + 32);
    // inline leaf 0x805444D0 (6 guest instruction(s))
    r4 = 0x808B0000u;
    r0 = 5000;
    r4 = (r4 + 12960);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805444D0
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 32);
    // inline leaf 0x80545BE8 (7 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 184));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80545BE8
    r3 = r31;
    r4 = (r1 + 32);
    // inline leaf 0x80545C04 (4 guest instruction(s))
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + -28648), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80545C04
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 32);
    // inline leaf 0x80545C14 (7 guest instruction(s))
    r6 = 65536;
    r0 = (r6 + -29504);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 186));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80545C14
    r3 = r31;
    r4 = (r1 + 32);
    // inline leaf 0x80545C30 (4 guest instruction(s))
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + -28640), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80545C30
    r3 = (r1 + 32);
    r4 = -1;
    ctx->lr = 0x80544FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052DA10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545C60 (6 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x80545C60
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545C40 (8 guest instruction(s))
}

loc_inl30_0x80545C40:
{
    r5 = 131072;
    r0 = (r5 + -31073);
}

loc_inl30_0x80545C4C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl30_0x80545C54;
    }
}

loc_inl30_0x80545C50:
{
    r4 = r0;
}

loc_inl30_0x80545C54:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28052), r4);
}

loc_inl30_cont_80545C40:
{
    // end of inlined leaf 0x80545C40
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545C98 (6 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 148));
    // end of inlined leaf 0x80545C98
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545C78 (8 guest instruction(s))
}

loc_inl32_0x80545C78:
{
    r5 = 131072;
    r0 = (r5 + -31073);
}

loc_inl32_0x80545C84:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl32_0x80545C8C;
    }
}

loc_inl32_0x80545C88:
{
    r4 = r0;
}

loc_inl32_0x80545C8C:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28048), r4);
}

loc_inl32_cont_80545C78:
{
    // end of inlined leaf 0x80545C78
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545CD0 (6 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    // end of inlined leaf 0x80545CD0
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545CB0 (8 guest instruction(s))
}

loc_inl34_0x80545CB0:
{
    r5 = 131072;
    r0 = (r5 + -31073);
}

loc_inl34_0x80545CBC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl34_0x80545CC4;
    }
}

loc_inl34_0x80545CC0:
{
    r4 = r0;
}

loc_inl34_0x80545CC4:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28044), r4);
}

loc_inl34_cont_80545CB0:
{
    // end of inlined leaf 0x80545CB0
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545D08 (6 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 156));
    // end of inlined leaf 0x80545D08
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545CE8 (8 guest instruction(s))
}

loc_inl36_0x80545CE8:
{
    r5 = 131072;
    r0 = (r5 + -31073);
}

loc_inl36_0x80545CF4:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl36_0x80545CFC;
    }
}

loc_inl36_0x80545CF8:
{
    r4 = r0;
}

loc_inl36_0x80545CFC:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28040), r4);
}

loc_inl36_cont_80545CE8:
{
    // end of inlined leaf 0x80545CE8
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545D40 (6 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 160));
    // end of inlined leaf 0x80545D40
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545D20 (8 guest instruction(s))
}

loc_inl38_0x80545D20:
{
    r5 = 131072;
    r0 = (r5 + -31073);
}

loc_inl38_0x80545D2C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl38_0x80545D34;
    }
}

loc_inl38_0x80545D30:
{
    r4 = r0;
}

loc_inl38_0x80545D34:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28036), r4);
}

loc_inl38_cont_80545D20:
{
    // end of inlined leaf 0x80545D20
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    // inline leaf 0x80545D78 (6 guest instruction(s))
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 164));
    // end of inlined leaf 0x80545D78
    r4 = r3;
    r3 = r31;
    // inline leaf 0x80545D58 (8 guest instruction(s))
}

loc_inl40_0x80545D58:
{
    r5 = 131072;
    r0 = (r5 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_inl40_0x80545D64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl40_0x80545D6C;
    }
}

loc_inl40_0x80545D68:
{
    r4 = r0;
}

loc_inl40_0x80545D6C:
{
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28032), r4);
}

loc_inl40_cont_80545D58:
{
    // end of inlined leaf 0x80545D58
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545DB0u) && KnownTranslatedCpuCall<0x80545DB0u>::kAvailable && !KnownTranslatedCpuCall<0x80545DB0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545DB0u>()) {
        const auto state_free_result_80545DB0_8632 = func_80545DB0_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545DB0_8632[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545DB0_8632[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545DB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545DE8u) && KnownTranslatedCpuCall<0x80545DE8u>::kAvailable && !KnownTranslatedCpuCall<0x80545DE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545DE8u>()) {
        const auto state_free_result_80545DE8_8E32 = func_80545DE8_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545DE8_8E32[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545DE8_8E32[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545DE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545DC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545E20u) && KnownTranslatedCpuCall<0x80545E20u>::kAvailable && !KnownTranslatedCpuCall<0x80545E20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545E20u>()) {
        const auto state_free_result_80545E20_9632 = func_80545E20_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545E20_9632[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545E20_9632[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545E20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545E00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545E58u) && KnownTranslatedCpuCall<0x80545E58u>::kAvailable && !KnownTranslatedCpuCall<0x80545E58u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545E58u>()) {
        const auto state_free_result_80545E58_9E32 = func_80545E58_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545E58_9E32[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545E58_9E32[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545E58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545E38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545E90u) && KnownTranslatedCpuCall<0x80545E90u>::kAvailable && !KnownTranslatedCpuCall<0x80545E90u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545E90u>()) {
        const auto state_free_result_80545E90_A632 = func_80545E90_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545E90_A632[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545E90_A632[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545E90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545E70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545EC8u) && KnownTranslatedCpuCall<0x80545EC8u>::kAvailable && !KnownTranslatedCpuCall<0x80545EC8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545EC8u>()) {
        const auto state_free_result_80545EC8_AE1B = func_80545EC8_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545EC8_AE1B[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545EC8_AE1B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545EC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545EA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545F00u) && KnownTranslatedCpuCall<0x80545F00u>::kAvailable && !KnownTranslatedCpuCall<0x80545F00u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545F00u>()) {
        const auto state_free_result_80545F00_B604 = func_80545F00_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545F00_B604[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545F00_B604[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545F00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545EE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545F38u) && KnownTranslatedCpuCall<0x80545F38u>::kAvailable && !KnownTranslatedCpuCall<0x80545F38u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545F38u>()) {
        const auto state_free_result_80545F38_BDED = func_80545F38_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545F38_BDED[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545F38_BDED[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545F18u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80545F50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80545124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80545130;
    }
}

loc_80545128:
{
    r3 = 0x80890000u;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 3360));
}

loc_80545130:
{
    f1.d = f31.d;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545F68u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545FC4u) && KnownTranslatedCpuCall<0x80545FC4u>::kAvailable && !KnownTranslatedCpuCall<0x80545FC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545FC4u>()) {
        const auto state_free_result_80545FC4_CAAA = func_80545FC4_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545FC4_CAAA[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545FC4_CAAA[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545FC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545FA4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80545FFCu) && KnownTranslatedCpuCall<0x80545FFCu>::kAvailable && !KnownTranslatedCpuCall<0x80545FFCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80545FFCu>()) {
        const auto state_free_result_80545FFC_D293 = func_80545FFC_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80545FFC_D293[0]);
        r3 = static_cast<uint32_t>(state_free_result_80545FFC_D293[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80545FFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80545FDCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546034u) && KnownTranslatedCpuCall<0x80546034u>::kAvailable && !KnownTranslatedCpuCall<0x80546034u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546034u>()) {
        const auto state_free_result_80546034_DA7C = func_80546034_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80546034_DA7C[0]);
        r3 = static_cast<uint32_t>(state_free_result_80546034_DA7C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546034u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546014u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054606Cu) && KnownTranslatedCpuCall<0x8054606Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054606Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054606Cu>()) {
        const auto state_free_result_8054606C_E265 = func_8054606C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8054606C_E265[0]);
        r3 = static_cast<uint32_t>(state_free_result_8054606C_E265[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054606Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054604Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805460A4u) && KnownTranslatedCpuCall<0x805460A4u>::kAvailable && !KnownTranslatedCpuCall<0x805460A4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805460A4u>()) {
        const auto state_free_result_805460A4_EA4E = func_805460A4_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_805460A4_EA4E[0]);
        r3 = static_cast<uint32_t>(state_free_result_805460A4_EA4E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805460A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546084u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805460DCu) && KnownTranslatedCpuCall<0x805460DCu>::kAvailable && !KnownTranslatedCpuCall<0x805460DCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805460DCu>()) {
        const auto state_free_result_805460DC_F237 = func_805460DC_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_805460DC_F237[0]);
        r3 = static_cast<uint32_t>(state_free_result_805460DC_F237[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805460DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805460BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805460F4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_805451E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805451F0;
    }
}

loc_805451E8:
{
    r3 = 0x80890000u;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 3360));
}

loc_805451F0:
{
    f1.d = f31.d;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054610Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80546148u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80545214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80545220;
    }
}

loc_80545218:
{
    r3 = 0x80890000u;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 3360));
}

loc_80545220:
{
    f1.d = f31.d;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546160u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805461BCu) && KnownTranslatedCpuCall<0x805461BCu>::kAvailable && !KnownTranslatedCpuCall<0x805461BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805461BCu>()) {
        const auto state_free_result_805461BC_103C8 = func_805461BC_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805461BC_103C8[0]);
        r5 = static_cast<uint32_t>(state_free_result_805461BC_103C8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805461BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = (r3 & 65535);
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054619Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r27 = 0;
}

loc_80545248:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r27 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805461FCu) && KnownTranslatedCpuCall<0x805461FCu>::kAvailable && !KnownTranslatedCpuCall<0x805461FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805461FCu>()) {
        const auto state_free_result_805461FC_10BFC = func_805461FC_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_805461FC_10BFC);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805461FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = (r3 & 65535);
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805461D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(25));
}

loc_80545270:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80545248;
    }
}

loc_80545274:
{
    r27 = 0;
}

loc_80545278:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r27 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546244u) && KnownTranslatedCpuCall<0x80546244u>::kAvailable && !KnownTranslatedCpuCall<0x80546244u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546244u>()) {
        const auto state_free_result_80546244_114FB = func_80546244_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80546244_114FB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546244u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = (r3 & 65535);
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054621Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(36));
}

loc_805452A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80545278;
    }
}

loc_805452A4:
{
    r27 = 0;
}

loc_805452A8:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r27 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054628Cu) && KnownTranslatedCpuCall<0x8054628Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054628Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054628Cu>()) {
        const auto state_free_result_8054628C_11DFA = func_8054628C_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_8054628C_11DFA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054628Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = (r3 & 65535);
    r3 = r31;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(32));
}

loc_805452D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805452A8;
    }
}

loc_805452D4:
{
    r27 = 0;
}

loc_805452D8:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r27 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805462D4u) && KnownTranslatedCpuCall<0x805462D4u>::kAvailable && !KnownTranslatedCpuCall<0x805462D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805462D4u>()) {
        const auto state_free_result_805462D4_126F9 = func_805462D4_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_805462D4_126F9[0]);
        r6 = static_cast<uint32_t>(state_free_result_805462D4_126F9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805462D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = (r27 & 65535);
    r5 = (r3 & 65535);
    r3 = r31;
    r4 = (r4 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805462ACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(10));
}

loc_80545304:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805452D8;
    }
}

loc_80545308:
{
    r27 = 0;
}

loc_8054530C:
{
    r28 = 0;
}

loc_80545310:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    r5 = (r27 & 255);
    r6 = (r28 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r4 = r3;
    r3 = r31;
    r5 = (r27 & 255);
    r6 = (r28 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805462F4u) && KnownTranslatedCpuCall<0x805462F4u>::kAvailable && !KnownTranslatedCpuCall<0x805462F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805462F4u>()) {
        const auto state_free_result_805462F4_13241 = func_805462F4_statefree(r3, r4, r5, r6);
        r3 = static_cast<uint32_t>(state_free_result_805462F4_13241);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805462F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
}

loc_80545340:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80545310;
    }
}

loc_80545344:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(8));
}

loc_8054534C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054530C;
    }
}

loc_80545350:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546358u) && KnownTranslatedCpuCall<0x80546358u>::kAvailable && !KnownTranslatedCpuCall<0x80546358u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546358u>()) {
        const auto state_free_result_80546358_13A8B = func_80546358_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80546358_13A8B[0]);
        r5 = static_cast<uint32_t>(state_free_result_80546358_13A8B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546358u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r31;
    // inline leaf 0x8054634C (3 guest instruction(s))
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -28380), r4);
    // end of inlined leaf 0x8054634C
    r27 = 0;
}

loc_8054536C:
{
}

loc_80545370:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8054537C;
    }
}

loc_80545374:
{
}

loc_80545378:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(2))) {
        goto loc_8054539C;
    }
}

loc_8054537C:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546388u) && KnownTranslatedCpuCall<0x80546388u>::kAvailable && !KnownTranslatedCpuCall<0x80546388u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546388u>()) {
        const auto state_free_result_80546388_14379 = func_80546388_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80546388_14379);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546374u) && KnownTranslatedCpuCall<0x80546374u>::kAvailable && !KnownTranslatedCpuCall<0x80546374u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546374u>()) {
        const auto state_free_result_80546374_149E6 = func_80546374_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80546374_149E6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546374u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8054539C:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805463C0u) && KnownTranslatedCpuCall<0x805463C0u>::kAvailable && !KnownTranslatedCpuCall<0x805463C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805463C0u>()) {
        const auto state_free_result_805463C0_1508C = func_805463C0_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_805463C0_1508C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805463C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805463ACu) && KnownTranslatedCpuCall<0x805463ACu>::kAvailable && !KnownTranslatedCpuCall<0x805463ACu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805463ACu>()) {
        func_805463AC_statefree(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805463ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805463F8u) && KnownTranslatedCpuCall<0x805463F8u>::kAvailable && !KnownTranslatedCpuCall<0x805463F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805463F8u>()) {
        const auto state_free_result_805463F8_15D13 = func_805463F8_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_805463F8_15D13);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805463F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805463E4u) && KnownTranslatedCpuCall<0x805463E4u>::kAvailable && !KnownTranslatedCpuCall<0x805463E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805463E4u>()) {
        func_805463E4_statefree(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805463E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546430u) && KnownTranslatedCpuCall<0x80546430u>::kAvailable && !KnownTranslatedCpuCall<0x80546430u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546430u>()) {
        const auto state_free_result_80546430_1699A = func_80546430_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80546430_1699A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546430u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054641Cu) && KnownTranslatedCpuCall<0x8054641Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054641Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054641Cu>()) {
        func_8054641C_statefree(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054641Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546468u) && KnownTranslatedCpuCall<0x80546468u>::kAvailable && !KnownTranslatedCpuCall<0x80546468u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546468u>()) {
        const auto state_free_result_80546468_17621 = func_80546468_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_80546468_17621);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546454u) && KnownTranslatedCpuCall<0x80546454u>::kAvailable && !KnownTranslatedCpuCall<0x80546454u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546454u>()) {
        func_80546454_statefree(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546454u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805464A0u) && KnownTranslatedCpuCall<0x805464A0u>::kAvailable && !KnownTranslatedCpuCall<0x805464A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805464A0u>()) {
        const auto state_free_result_805464A0_182A8 = func_805464A0_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_805464A0_182A8[0]);
        r6 = static_cast<uint32_t>(state_free_result_805464A0_182A8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805464A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = r27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054648Cu) && KnownTranslatedCpuCall<0x8054648Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054648Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054648Cu>()) {
        const auto state_free_result_8054648C_18962 = func_8054648C_statefree(r3, r4, r5);
        r3 = static_cast<uint32_t>(state_free_result_8054648C_18962);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054648Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
}

loc_80545444:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054536C;
    }
}

loc_80545448:
{
    r27 = 0;
}

loc_8054544C:
{
    r3 = (r1 + 60);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805444E8u) && KnownTranslatedCpuCall<0x805444E8u>::kAvailable && !KnownTranslatedCpuCall<0x805444E8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805444E8u>()) {
        func_805444E8_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805444E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r30;
    r4 = (r1 + 60);
    r5 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x805464C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = r31;
    r4 = (r1 + 60);
    r5 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8054652Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = (r1 + 60);
    r4 = -1;
    ctx->lr = 0x80545484u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8054450Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(10));
}

loc_8054548C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054544C;
    }
}

loc_80545490:
{
    r3 = (r1 + 48);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805442C0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = r30;
    r4 = (r1 + 48);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054656Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805454BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805454D4;
    }
}

loc_805454C0:
{
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r3 = r31;
    r4 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x805465CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    goto loc_805454F0;
}

loc_805454D4:
{
    r3 = (r1 + 48);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80544310u) && KnownTranslatedCpuCall<0x80544310u>::kAvailable && !KnownTranslatedCpuCall<0x80544310u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80544310u>()) {
        func_80544310_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80544310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r3 = r31;
    r4 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x805465CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_805454F0:
{
    r3 = (r1 + 48);
    r4 = -1;
    ctx->lr = 0x805454FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C334u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r7 = r30;
    r4 = (r1 + 10);
    r5 = (r1 + 9);
    r6 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x805465F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead8((r1 + 10));
    r3 = (r1 + 12);
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r6 = MemoryInline::FlatRead8((r1 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80546660u>(ctx);
    r0 = ctx->gpr[0];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = r31;
    r4 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x805466B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = 0;
}

loc_80545538:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r27 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805466DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = r3;
    r3 = r31;
    r4 = (r27 & 255);
    r5 = (r0 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546734u) && KnownTranslatedCpuCall<0x80546734u>::kAvailable && !KnownTranslatedCpuCall<0x80546734u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546734u>()) {
        const auto state_free_result_80546734_1B767 = func_80546734_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_80546734_1B767[0]);
        r3 = static_cast<uint32_t>(state_free_result_80546734_1B767[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
}

loc_80545564:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80545538;
    }
}

loc_80545568:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = r30;
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80546744u) && KnownTranslatedCpuCall<0x80546744u>::kAvailable && !KnownTranslatedCpuCall<0x80546744u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80546744u>()) {
        const auto state_free_result_80546744_1BF2D = func_80546744_statefree(r3, r4, r5);
        r6 = static_cast<uint32_t>(state_free_result_80546744_1BF2D[0]);
        r7 = static_cast<uint32_t>(state_free_result_80546744_1BF2D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80546744u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054677Cu) && KnownTranslatedCpuCall<0x8054677Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054677Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054677Cu>()) {
        const auto state_free_result_8054677C_1C5E0 = func_8054677C_statefree(r3, r4, ctr);
        ctr = static_cast<uint32_t>(state_free_result_8054677C_1C5E0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054677Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805467B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r4 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805467A8u) && KnownTranslatedCpuCall<0x805467A8u>::kAvailable && !KnownTranslatedCpuCall<0x805467A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805467A8u>()) {
        func_805467A8_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805467A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054454Cu) && KnownTranslatedCpuCall<0x8054454Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054454Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054454Cu>()) {
        func_8054454C_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054454Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 1;
    goto loc_805455C0;
}

loc_805455B0:
{
    r3 = r31;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8054454Cu) && KnownTranslatedCpuCall<0x8054454Cu>::kAvailable && !KnownTranslatedCpuCall<0x8054454Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054454Cu>()) {
        func_8054454C_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8054454Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0;
}

loc_805455C0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 272);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80544D40 func_80544D40 preserves=false fpr_mask=0x80000000
