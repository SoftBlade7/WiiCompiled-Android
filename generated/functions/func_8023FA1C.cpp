#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023FA1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023FA1C;

loc_8023FA1C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 356u, (r1 + 356), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 336u, (r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 336);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 308u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 312u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 316u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 320u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 324u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 328u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 332u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r9 = MemoryInline::FlatRead16((r3 + 104));
    r8 = 1127219200;
    r27 = r6;
    MemoryInline::WriteResolved32(guest_range_1, 272u, (r1 + 272), r8);
    r0 = (r9 & 16);
}

loc_8023FA4C:
{
    r25 = r3;
    MemoryInline::FlatWriteRam32((r1 + 280), r8);
    r26 = r7;
    r6 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023FA6C;
    }
}

loc_8023FA60:
{
    r0 = (r9 & 8);
}

loc_8023FA64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023FA6C;
    }
}

loc_8023FA68:
{
    r6 = 1;
}

loc_8023FA6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8023FA70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FEF0;
    }
}

loc_8023FA74:
{
    r0 = (r9 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023FA78:
{
    r0 = MemoryInline::FlatRead16((r13 + -23752));
    r28 = MemoryInline::FlatRead16(r3);
    r29 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r5 & r0);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r31 = (r31_rot_1 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FA98;
    }
}

loc_8023FA90:
{
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r28 = (r28_rot_1 & 65534);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & 65534);
}

loc_8023FA98:
{
    MemoryInline::FlatWriteRam32((r1 + 276), r28);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    r3 = (r1 + 168);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24320));
    MemoryInline::FlatWriteRam32((r1 + 284), r29);
    f31.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24364));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -24344));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f2.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    r4 = MemoryInline::FlatRead32((r4 + 60));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    ctx->lr = 0x8023FAD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023D380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead16((r1 + 220));
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023FAE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023FAEC;
    }
}

loc_8023FAE4:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWriteRam16((r1 + 220), static_cast<uint16_t>(r0));
}

loc_8023FAEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24316));
    r0 = 0;
    r4 = MemoryInline::FlatRead16((r1 + 220));
    r3 = (r1 + 168);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24364));
    r4 = (r4 | 72);
    MemoryInline::FlatWriteRam16((r1 + 220), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 168), r0);
    ctx->lr = 0x8023FB1Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023D4E8u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8023FB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FBB8;
    }
}

loc_8023FB24:
{
    r0 = (0 - r28);
    MemoryInline::FlatWriteRam32((r1 + 284), r29);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -24328));
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r3 = (r1 + 168);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    r4 = (r1 + 16);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -24344));
    MemoryInline::FlatWriteRam32((r1 + 276), r28);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24356));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 284), r29);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 280));
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    ctx->lr = 0x8023FB7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023DDD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead8((r2 + -24104));
    r3 = (r1 + 16);
    r10 = MemoryInline::FlatRead8((r2 + -24103));
    r7 = (r1 + 8);
    r9 = MemoryInline::FlatRead8((r2 + -24102));
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r2 + -24101));
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    r6 = 0;
    r8 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->lr = 0x8023FBB8u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8021AD78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023FBB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023FBBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FBEC;
    }
}

loc_8023FBC0:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801727CCu>(ctx);
    r27 = 0x80380000u;
    r0 = 0;
    r27 = (r27 + 17696);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r27 + 12), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801727F8u>(ctx);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r27 + 13), static_cast<uint8_t>(r0));
    goto loc_8023FC14;
}

loc_8023FBEC:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801727CCu>(ctx);
    r27 = 0x80380000u;
    r0 = 1;
    r27 = (r27 + 17696);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r27 + 12), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801727F8u>(ctx);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r27 + 13), static_cast<uint8_t>(r0));
}

loc_8023FC14:
{
    r3 = r25;
    ctx->lr = 0x8023FC1Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023F690u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 168);
    ctx->lr = 0x8023FC24u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023DBD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PPC_Fctiwz(f1.d);
    r3 = MemoryInline::FlatRead16((r25 + 104));
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f1.d);
    r0 = (r3 & 2);
}

loc_8023FC40:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 296), f0.d);
    r29 = MemoryInline::FlatRead32((r1 + 292));
    r28 = MemoryInline::FlatRead32((r1 + 300));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023FC58;
    }
}

loc_8023FC50:
{
    r0 = (r3 & 4);
}

loc_8023FC54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023FE6C;
    }
}

loc_8023FC58:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801727CCu>(ctx);
    r27 = 0x80380000u;
    r0 = 1;
    r27 = (r27 + 17696);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r27 + 12), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801727F8u>(ctx);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r27 + 13), static_cast<uint8_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25832), 0, 1729u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r2 + -25832));
    r4 = MemoryInline::FlatRead32((r25 + 268));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r2 + -25831));
    r30 = MemoryInline::FlatRead32((r4 + 4));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r2 + -25830));
    r4 = MemoryInline::FlatRead8((r30 + 20));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r2 + -25829));
    r4 = (r4 | 8);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r2 + -25828));
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r2 + -25827));
    MemoryInline::FlatWrite8((r30 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r2 + -25826));
    MemoryInline::FlatWrite8((r30 + 34), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 35), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 36), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 37), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r25 + 104));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r27 = (r27_rot_1 & 1);
}

loc_8023FCD4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8023FCE8;
    }
}

loc_8023FCD8:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (r0 | 3);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
    goto loc_8023FCF4;
}

loc_8023FCE8:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
}

loc_8023FCF4:
{
}

loc_8023FCF8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8023FD0C;
    }
}

loc_8023FCFC:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (r0 & 252);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
    goto loc_8023FD30;
}

loc_8023FD0C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1728u, (r2 + -24104));
    r3 = (r2 + -24104);
    MemoryInline::FlatWrite8((r30 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r30 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
}

loc_8023FD30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8023FD34:
{
    r7 = 40;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FD40;
    }
}

loc_8023FD3C:
{
    r7 = 39;
}

loc_8023FD40:
{
    r0 = MemoryInline::FlatRead16((r25 + 104));
    r3 = r30;
    r4 = (r29 & 65535);
    r5 = (r28 & 65535);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1);
    ctx->lr = 0x8023FD58u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80214C74u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 64);
    r4 = (r1 + 168);
    ctx->lr = 0x8023FD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023D448u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24364));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24368));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8023FD74:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FD94;
    }
}

loc_8023FD80:
{
    r3 = MemoryInline::FlatRead16((r1 + 116));
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = (r3 | 1);
    MemoryInline::FlatWriteRam16((r1 + 116), static_cast<uint16_t>(r0));
}

loc_8023FD94:
{
    r3 = (r1 + 64);
    ctx->lr = 0x8023FD9Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023D4E8u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8023FDA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FE58;
    }
}

loc_8023FDA4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r25 + 272), 0, 13u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r25 + 272));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r25 + 284));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r4));
    r0 = (0 - r5);
    r3 = (r0 | r5);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r25 + 272));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r25 + 280));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r25 + 272));
    MemoryInline::FlatWrite8((r4 + 56), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r25 + 272));
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r25 + 272));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r25 + 272));
    ctx->lr = 0x8023FDF4u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80234B44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 292));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023FDFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FE6C;
    }
}

loc_8023FE00:
{
    r3 = r30;
    r4 = (r29 & 65535);
    r5 = (r28 & 65535);
    r6 = 0;
    r7 = 40;
    ctx->lr = 0x8023FE18u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80214C74u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_3 = MemoryInline::ResolveRangeHost((r25 + 272), 0, 21u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r25 + 272));
    r0 = 1;
    r4 = MemoryInline::ReadResolved8(guest_range_3, 20u, (r25 + 292));
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r25 + 272));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r25 + 288));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r25 + 272));
    MemoryInline::FlatWrite8((r3 + 56), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r25 + 272));
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r25 + 272));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r25 + 272));
    ctx->lr = 0x8023FE54u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80234B44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8023FE6C;
}

loc_8023FE58:
{
    r3 = MemoryInline::FlatRead32((r25 + 268));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r25 + 268));
    ctx->lr = 0x8023FE6Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80234B44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023FE6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8023FE70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023FE98;
    }
}

loc_8023FE74:
{
    r0 = MemoryInline::FlatRead8((r13 + -23716));
    r3 = (r13 + -23716);
    MemoryInline::FlatWrite8((r25 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r25 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r25 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r25 + 24), static_cast<uint8_t>(r0));
}

loc_8023FE98:
{
    r4 = MemoryInline::FlatRead8((r25 + 5));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    r3 = 0x80260000u;
    r6 = MemoryInline::FlatRead8((r25 + 20));
    r5 = (1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r4 = (r4 + -1);
    r4 = (r5 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741816);
    r3 = (r3 + -32328);
    r5 = (r6 & -17);
    r0 = (r3 + r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & 4);
    MemoryInline::FlatWrite8((r25 + 20), static_cast<uint8_t>(r5));
    r3 = r25;
    r4_addr_1 = (r4 + r0);
    r7 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = (r29 & 65535);
    r5 = (r28 & 65535);
    r6 = 0;
    ctx->lr = 0x8023FEE4u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80214C74u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r25 + 104));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r25 + 104), static_cast<uint16_t>(r0));
}

loc_8023FEF0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 336);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 308), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 28u, (r1 + 336));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023FA1C func_8023FA1C preserves=false fpr_mask=0x80000000
