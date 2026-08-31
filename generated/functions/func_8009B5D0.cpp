#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009B5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009B5D0;

loc_8009B5D0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 112u, (r1 + 112), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_3, 88u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 92u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_3, 96u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 100u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_3, 104u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 108u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r0);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 64), r0);
    ctx->lr = 0x8009B648u;
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
    InvokeDirectCpu<0x800A4530u>(ctx);
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
    r3 = (r3 + 852);
    ctx->lr = 0x8009B650u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 5), 0, 239u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009B658:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009B66C;
    }
}

loc_8009B65C:
{
    ctx->lr = 0x8009B660u;
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
    InvokeDirectCpu<0x800A4530u>(ctx);
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
    r3 = (r3 + 852);
    ctx->lr = 0x8009B668u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8009BB2C;
}

loc_8009B66C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 235u, (r30 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009B674:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009B688;
    }
}

loc_8009B678:
{
    ctx->lr = 0x8009B67Cu;
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
    InvokeDirectCpu<0x800A4530u>(ctx);
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
    r3 = (r3 + 852);
    ctx->lr = 0x8009B684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8009BB2C;
}

loc_8009B688:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 161u, (r30 + 166));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 163u, (r30 + 168));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28280), 0, 48u, true, false);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28280));
}

loc_8009B698:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r4))) {
        goto loc_8009B6A4;
    }
}

loc_8009B69C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 160u, (r30 + 165));
    goto loc_8009B6C0;
}

loc_8009B6A4:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 159u, (r30 + 164));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 160u, (r30 + 165));
    r0 = (r0 - r5);
    r0 = (r3 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r5 + r0);
    r0 = (r0 & 255);
}

loc_8009B6C0:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 177u, (r30 + 182));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -28248));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 257u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 256u, (r3 + 260));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -28272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f7.d));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 178u, (r30 + 183));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 179u, (r30 + 184));
    r4 = (r4 ^ -2147483648);
    f5.d = PpcFmulsInline(f2.d, f2.d);
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28280));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f7.d));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -28240));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3u, (r30 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f7.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r3 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28268));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r3 + 4));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 167u, (r30 + 172));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 169u, (r30 + 174));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 7u, (r30 + 12));
    f26.d = PpcFmulsInline(f26.d, f6.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r6));
}

loc_8009B758:
{
    f28.d = PpcFmulsInline(f28.d, f5.d);
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28276));
    f6.d = PpcFmulsInline(f9.d, f9.d);
    f5.d = PpcFmulsInline(f10.d, f10.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f28.d = PpcFmulsInline(f28.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f26.d = PpcFmulsInline(f26.d, f0.d);
    f28.d = PpcFmulsInline(f28.d, f5.d);
    f27.d = PpcFmulsInline(f2.d, f1.d);
    f28.d = PpcFmulsInline(f28.d, f4.d);
    f28.d = PpcFmulsInline(f28.d, f7.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009B798;
    }
}

loc_8009B78C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 166u, (r30 + 171));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_8009B7BC;
}

loc_8009B798:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 165u, (r30 + 170));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 166u, (r30 + 171));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r4);
    r0 = (r5 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r6));
    r0 = (r7 + r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8009B7BC:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -28240));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -28264));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8009B7E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009B7E8;
    }
}

loc_8009B7E4:
{
    goto loc_8009B7FC;
}

loc_8009B7E8:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -28260));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8009B7F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009B7F8;
    }
}

loc_8009B7F4:
{
    goto loc_8009B7FC;
}

loc_8009B7F8:
{
    f2.d = f0.d;
}

loc_8009B7FC:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f2.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 19u, (r30 + 24));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 232u, (r3 + 236));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 11u, (r30 + 16));
    f25.d = PpcFmulsInline(f25.d, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r3 + 12));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 173u, (r30 + 178));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 175u, (r30 + 180));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    f25.d = PpcFmulsInline(f25.d, f2.d);
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r6));
}

loc_8009B828:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f1.d));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009B840;
    }
}

loc_8009B834:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 172u, (r30 + 177));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_8009B864;
}

loc_8009B840:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 171u, (r30 + 176));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 172u, (r30 + 177));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r4);
    r0 = (r5 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r6));
    r0 = (r7 + r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8009B864:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -28240));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -28264));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -28256));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8009B888:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009B890;
    }
}

loc_8009B88C:
{
    goto loc_8009B8A4;
}

loc_8009B890:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28276));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8009B898:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009B8A0;
    }
}

loc_8009B89C:
{
    goto loc_8009B8A4;
}

loc_8009B8A0:
{
    f2.d = f0.d;
}

loc_8009B8A4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 191u, (r30 + 196));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f2.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r27 = r30;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 195u, (r30 + 200));
    r26 = (r1 + 40);
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -28248));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r0 = (r4 + -64);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f30.d = PpcBitCastToFloatInline(resolved_pair.second);
            f23.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -28272));
            f23.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28276));
        }
    }
    r28 = 0;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 15u, (r30 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28280));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -28240));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -28252));
    r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + 24));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 23u, (r30 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 27u, (r30 + 32));
    f22.d = f23.d;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28276));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r3 + 20));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f1.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r3 + 36));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f5.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r3 + 16));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f3.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f5.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f2.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f1.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f4.d));
}

loc_8009B944:
{
    r3 = (r30 + r28);
    MemoryInline::FlatWriteFloat32(r26, f31.d);
    r0 = MemoryInline::FlatRead8((r3 + 197));
    r4 = r28;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 36));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f29.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    // inline leaf 0x8008E050 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x8008E050
    f0.d = MemoryInline::FlatReadFloat32(r26);
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8009B98C:
{
    r27 = (r27 + 4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    r26 = (r26 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009B944;
    }
}

loc_8009B9A0:
{
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28276));
    r26 = (r1 + 24);
    r27 = (r1 + 8);
    r28 = 0;
}

loc_8009B9B0:
{
    MemoryInline::FlatWriteFloat32(r26, f29.d);
    r4 = r28;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    // inline leaf 0x8008E080 (4 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    // end of inlined leaf 0x8008E080
    f0.d = MemoryInline::FlatReadFloat32(r26);
    r4 = r28;
    MemoryInline::FlatWriteFloat32(r27, f29.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    // inline leaf 0x8008E090 (4 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 92));
    // end of inlined leaf 0x8008E090
    f0.d = MemoryInline::FlatReadFloat32(r27);
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8009B9E8:
{
    r26 = (r26 + 4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009B9B0;
    }
}

loc_8009B9FC:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 235u, (r30 + 240));
    f29.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f31.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f30.d = MemoryInline::FlatReadFloat32((r1 + 48));
    goto loc_8009BB18;
}

loc_8009BA10:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 60), 0, 100u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r31 + 60), f28.d);
    r28 = r31;
    r27 = (r1 + 24);
    r26 = (r1 + 8);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 96u, (r31 + 156), f27.d);
    r25 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f26.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f25.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r31 + 64), f26.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r31 + 68), f25.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f24.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f23.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r31 + 72), f24.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r31 + 76), f23.d);
    }
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r31 + 80), r29);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r31 + 84), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f22.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r31 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r31 + 92), f22.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r31 + 96), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r31 + 100), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r31 + 104), f30.d);
}

loc_8009BA64:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    r4 = r25;
    // inline leaf 0x8008E070 (4 guest instruction(s))
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    // end of inlined leaf 0x8008E070
    MemoryInline::FlatWriteFloat32((r28 + 108), f1.d);
    r25 = (r25 + 1);
    f0.d = MemoryInline::FlatReadFloat32(r27);
}

loc_8009BA80:
{
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    r27 = (r27 + 4);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    r26 = (r26 + 4);
    MemoryInline::FlatWriteFloat32((r28 + 140), f0.d);
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_8009BA64;
    }
}

loc_8009BA9C:
{
    r25 = 0;
    r28 = 0;
    goto loc_8009BAC4;
}

loc_8009BAA8:
{
    r5 = (r3 + r28);
    r3 = MemoryInline::FlatRead32((r31 + 236));
    r4 = r25;
    r5 = (r5 + 108);
    // inline leaf 0x800AAC90 (18 guest instruction(s))
    r0 = (r4 * 24);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    MemoryInline::FlatWriteFloat32((r4 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 162));
    r0 = (r0 | 60);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800AAC90
    r28 = (r28 + 24);
    r25 = (r25 + 1);
}

loc_8009BAC4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 231u, (r30 + 236));
    r0 = MemoryInline::FlatRead32((r3 + 256));
}

loc_8009BAD0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_8009BAA8;
    }
}

loc_8009BAD4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 135u, (r30 + 140));
    guest_range_5 = MemoryInline::ResolveRangeHost((r31 + 28), 0, 25u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r31 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 139u, (r30 + 144));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r31 + 32), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 143u, (r30 + 148));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r31 + 36), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 147u, (r30 + 152));
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r31 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 148u, (r30 + 153));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r31 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 149u, (r30 + 154));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r31 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 150u, (r30 + 155));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r31 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 151u, (r30 + 156));
    MemoryInline::WriteResolved8(guest_range_5, 24u, (r31 + 52), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r31 + 240));
}

loc_8009BB18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8009BB1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009BA10;
    }
}

loc_8009BB20:
{
    ctx->lr = 0x8009BB24u;
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
    InvokeDirectCpu<0x800A4530u>(ctx);
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
    r3 = (r3 + 852);
    ctx->lr = 0x8009BB2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8009BB2C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 84), 0, 196u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 172u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 156u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 140u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 124u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 108u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 92u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 76u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 60u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 44u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 28u, (r1 + 112));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_6, 192u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8009B5D0 func_8009B5D0 preserves=false fpr_mask=0xFFC00000
