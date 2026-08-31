#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB9B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
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

    goto loc_800AB9B0;

loc_800AB9B0:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
}

loc_800AB9F0:
{
    r6 = MemoryInline::FlatRead32((r3 + 140));
}

loc_800AB9F8:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_800ABA88;
    }
}

loc_800AB9FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 268));
}

loc_800ABA04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800ABA88;
    }
}

loc_800ABA08:
{
    r0 = (r5 * 24);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 168));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800ABA18:
{
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABA44;
    }
}

loc_800ABA30:
{
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACE00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f27.d = f1.d;
    f26.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    goto loc_800ABA60;
}

loc_800ABA44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_800ABA48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABA60;
    }
}

loc_800ABA4C:
{
    f1.d = (-(f1.d));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACE00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f26.d = f1.d;
}

loc_800ABA60:
{
    f1.d = f16.d;
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACEE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27992));
    f24.d = f1.d;
    r3 = (r1 + 40);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f16.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACEE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f16.d = f1.d;
    goto loc_800ABB6C;
}

loc_800ABA88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_800ABA8C:
{
    f16.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABAAC;
    }
}

loc_800ABA94:
{
}

loc_800ABA98:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800ABAA0;
    }
}

loc_800ABA9C:
{
    f16.d = MemoryInline::FlatReadFloat32((r2 + -27984));
}

loc_800ABAA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_800ABAA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABAAC;
    }
}

loc_800ABAA8:
{
    f16.d = MemoryInline::FlatReadFloat32((r2 + -28024));
}

loc_800ABAAC:
{
    ctx->lr = 0x800ABAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
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
    InvokeDirectCpu<0x800887F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
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
    // inline leaf 0x800890A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800890A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_800ABAB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABAF4;
    }
}

loc_800ABABC:
{
    r0 = (r29 * 24);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 168));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 172));
    r3 = r28;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f16.d));
    r4 = (r1 + 36);
    r6 = (r28 + r0);
    r5 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AB5C0u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    goto loc_800ABB20;
}

loc_800ABAF4:
{
    r0 = (r29 * 24);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f16.d));
    r3 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_800ABB20:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACE00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f27.d = f1.d;
    r3 = (r1 + 40);
    f1.d = (-(f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACE00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f26.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACEE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27992));
    f24.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 40);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACEE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f16.d = f1.d;
}

loc_800ABB6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27980));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800ACDA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f26.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28008));
    f17.d = f1.d;
    f25.d = PpcFmulsInline(f0.d, f2.d);
    ctx->lr = 0x800ABB88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
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
    InvokeDirectCpu<0x800887F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
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
    // inline leaf 0x800890A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800890A0
}

loc_800ABB90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800ABBB0;
    }
}

loc_800ABB94:
{
}

loc_800ABB98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_800ABBF0;
    }
}

loc_800ABB9C:
{
}

loc_800ABBA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_800ABC2C;
    }
}

loc_800ABBA4:
{
}

loc_800ABBA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_800ABC84;
    }
}

loc_800ABBAC:
{
    goto loc_800ABCDC;
}

loc_800ABBB0:
{
    f1.d = PpcFmulsInline(f28.d, f27.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    f0.d = PpcFmulsInline(f28.d, f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    f23.d = PpcFmulsInline(f31.d, f27.d);
    f22.d = PpcFmulsInline(f31.d, f26.d);
    f21.d = PpcFmulsInline(f30.d, f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f20.d = PpcFmulsInline(f30.d, f26.d);
    f19.d = PpcFmulsInline(f29.d, f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    f18.d = PpcFmulsInline(f29.d, f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    goto loc_800ABCDC;
}

loc_800ABBF0:
{
    f23.d = PpcFmulsInline(f31.d, f25.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    f21.d = PpcFmulsInline(f30.d, f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    f0.d = PpcFmulsInline(f28.d, f25.d);
    f19.d = PpcFmulsInline(f29.d, f25.d);
    f22.d = f23.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f20.d = f21.d;
    f18.d = f19.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    goto loc_800ABCDC;
}

loc_800ABC2C:
{
    f5.d = PpcFmulsInline(f27.d, f24.d);
    f6.d = PpcFmulsInline(f26.d, f24.d);
    f7.d = PpcFmulsInline(f17.d, f16.d);
    f0.d = PpcFmulsInline(f28.d, f5.d);
    f1.d = PpcFmulsInline(f28.d, f6.d);
    f4.d = PpcFmulsInline(f31.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f3.d = PpcFmulsInline(f30.d, f7.d);
    f2.d = PpcFmulsInline(f29.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    f0.d = PpcFmulsInline(f28.d, f7.d);
    f23.d = PpcFmulsInline(f31.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    f22.d = PpcFmulsInline(f31.d, f6.d);
    f21.d = PpcFmulsInline(f30.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    f20.d = PpcFmulsInline(f30.d, f6.d);
    f19.d = PpcFmulsInline(f29.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f18.d = PpcFmulsInline(f29.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_800ABCDC;
}

loc_800ABC84:
{
    f6.d = PpcFmulsInline(f27.d, f16.d);
    f7.d = PpcFmulsInline(f26.d, f16.d);
    f4.d = PpcFmulsInline(f27.d, f24.d);
    f5.d = PpcFmulsInline(f26.d, f24.d);
    f1.d = PpcFmulsInline(f31.d, f6.d);
    f0.d = PpcFmulsInline(f31.d, f7.d);
    f3.d = PpcFmulsInline(f30.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    f2.d = PpcFmulsInline(f30.d, f7.d);
    f1.d = PpcFmulsInline(f29.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = PpcFmulsInline(f29.d, f7.d);
    f23.d = PpcFmulsInline(f31.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    f22.d = PpcFmulsInline(f31.d, f5.d);
    f21.d = PpcFmulsInline(f30.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f20.d = PpcFmulsInline(f30.d, f5.d);
    f19.d = PpcFmulsInline(f29.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f18.d = PpcFmulsInline(f29.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_800ABCDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r1 + 144));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 128));
    f8.d = PpcFmulsInline(f25.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r1 + 148));
    f7.d = PpcFmulsInline(f25.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 132));
    f6.d = PpcFmulsInline(f25.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r1 + 152));
    f5.d = PpcFmulsInline(f25.d, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 136));
    f4.d = PpcFmulsInline(f25.d, f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r1 + 156));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 140));
    f3.d = PpcFmulsInline(f25.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    f2.d = PpcFmulsInline(f25.d, f2.d);
    f1.d = PpcFmulsInline(f25.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f8.d);
    SetCRFloatResident(cr, 0, f23.d, f0.d);
}

loc_800ABD28:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABD54;
    }
}

loc_800ABD4C:
{
    r0 = 0;
    goto loc_800ABD84;
}

loc_800ABD54:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABD64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABD78;
    }
}

loc_800ABD68:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABD80;
}

loc_800ABD78:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABD80:
{
    r0 = (r3 & 65535);
}

loc_800ABD84:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f22.d, f0.d);
}

loc_800ABD90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABDA0;
    }
}

loc_800ABD98:
{
    r0 = 0;
    goto loc_800ABDD0;
}

loc_800ABDA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f22.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABDB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABDC4;
    }
}

loc_800ABDB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f22.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABDCC;
}

loc_800ABDC4:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABDCC:
{
    r0 = (r3 & 65535);
}

loc_800ABDD0:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800ABDE0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABDF0;
    }
}

loc_800ABDE8:
{
    r0 = 0;
    goto loc_800ABE20;
}

loc_800ABDF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABE00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABE14;
    }
}

loc_800ABE04:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABE1C;
}

loc_800ABE14:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABE1C:
{
    r0 = (r3 & 65535);
}

loc_800ABE20:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f21.d, f0.d);
}

loc_800ABE2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABE3C;
    }
}

loc_800ABE34:
{
    r0 = 0;
    goto loc_800ABE6C;
}

loc_800ABE3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f21.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABE4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABE60;
    }
}

loc_800ABE50:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f21.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABE68;
}

loc_800ABE60:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABE68:
{
    r0 = (r3 & 65535);
}

loc_800ABE6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f20.d, f0.d);
}

loc_800ABE78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABE88;
    }
}

loc_800ABE80:
{
    r0 = 0;
    goto loc_800ABEB8;
}

loc_800ABE88:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f20.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABE98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABEAC;
    }
}

loc_800ABE9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f20.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABEB4;
}

loc_800ABEAC:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABEB4:
{
    r0 = (r3 & 65535);
}

loc_800ABEB8:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800ABEC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABED8;
    }
}

loc_800ABED0:
{
    r0 = 0;
    goto loc_800ABF08;
}

loc_800ABED8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABEE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABEFC;
    }
}

loc_800ABEEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABF04;
}

loc_800ABEFC:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABF04:
{
    r0 = (r3 & 65535);
}

loc_800ABF08:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f19.d, f0.d);
}

loc_800ABF14:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABF24;
    }
}

loc_800ABF1C:
{
    r0 = 0;
    goto loc_800ABF54;
}

loc_800ABF24:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f19.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABF34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABF48;
    }
}

loc_800ABF38:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f19.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABF50;
}

loc_800ABF48:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABF50:
{
    r0 = (r3 & 65535);
}

loc_800ABF54:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f18.d, f0.d);
}

loc_800ABF60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABF70;
    }
}

loc_800ABF68:
{
    r0 = 0;
    goto loc_800ABFA0;
}

loc_800ABF70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f18.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABF80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABF94;
    }
}

loc_800ABF84:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f18.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABF9C;
}

loc_800ABF94:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABF9C:
{
    r0 = (r3 & 65535);
}

loc_800ABFA0:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 14), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800ABFB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ABFC0;
    }
}

loc_800ABFB8:
{
    r0 = 0;
    goto loc_800ABFF0;
}

loc_800ABFC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800ABFD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ABFE4;
    }
}

loc_800ABFD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800ABFEC;
}

loc_800ABFE4:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800ABFEC:
{
    r0 = (r3 & 65535);
}

loc_800ABFF0:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800AC000:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC010;
    }
}

loc_800AC008:
{
    r0 = 0;
    goto loc_800AC040;
}

loc_800AC010:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC020:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC034;
    }
}

loc_800AC024:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC03C;
}

loc_800AC034:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC03C:
{
    r0 = (r3 & 65535);
}

loc_800AC040:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800AC050:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC060;
    }
}

loc_800AC058:
{
    r0 = 0;
    goto loc_800AC090;
}

loc_800AC060:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC070:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC084;
    }
}

loc_800AC074:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC08C;
}

loc_800AC084:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC08C:
{
    r0 = (r3 & 65535);
}

loc_800AC090:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800AC0A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC0B0;
    }
}

loc_800AC0A8:
{
    r0 = 0;
    goto loc_800AC0E0;
}

loc_800AC0B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC0C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC0D4;
    }
}

loc_800AC0C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC0DC;
}

loc_800AC0D4:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC0DC:
{
    r0 = (r3 & 65535);
}

loc_800AC0E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AC0F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC100;
    }
}

loc_800AC0F8:
{
    r0 = 0;
    goto loc_800AC134;
}

loc_800AC100:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC128;
    }
}

loc_800AC114:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC130;
}

loc_800AC128:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC130:
{
    r0 = (r3 & 65535);
}

loc_800AC134:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800AC148:
{
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r3));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC158;
    }
}

loc_800AC154:
{
    goto loc_800AC188;
}

loc_800AC158:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC168:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC17C;
    }
}

loc_800AC16C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC184;
}

loc_800AC17C:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC184:
{
    r3 = (r3 & 65535);
}

loc_800AC188:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 120));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r3));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800AC19C:
{
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC1AC;
    }
}

loc_800AC1A8:
{
    goto loc_800AC1DC;
}

loc_800AC1AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC1BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC1D0;
    }
}

loc_800AC1C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC1D8;
}

loc_800AC1D0:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC1D8:
{
    r0 = (r3 & 65535);
}

loc_800AC1DC:
{
    f17.d = MemoryInline::FlatReadFloat32((r1 + 124));
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    SetCRFloatResident(cr, 0, f17.d, f0.d);
}

loc_800AC1F0:
{
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r3));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AC200;
    }
}

loc_800AC1FC:
{
    goto loc_800AC230;
}

loc_800AC200:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_800AC210:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AC224;
    }
}

loc_800AC214:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27976));
    f1.d = PpcFmulsInline(f0.d, f17.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800AC22C;
}

loc_800AC224:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_800AC22C:
{
    r3 = (r3 & 65535);
}

loc_800AC230:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 280u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 256u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 240u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 224u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 208u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 192u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 176u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 160u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 144u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 128u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 112u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 176));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 172));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 168));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 164));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 160));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 276u, (r1 + 436));
    ctx->lr = r0;
    r1 = (r1 + 432);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
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
// RECOMP_REGISTRATION base 0x800AB9B0 func_800AB9B0 preserves=false fpr_mask=0x0FFF0000
