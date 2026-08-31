#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070BE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070BE0C;

loc_8070BE0C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 224);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 208u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead8((r3 + 224));
    r4 = 1127219200;
    r31 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_1, 168u, (r1 + 168), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070BE4C:
{
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 176), r4);
    r31 = (r31 + 5856);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070C438;
    }
}

loc_8070BE5C:
{
    f29.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r27 = r30;
    f30.d = MemoryInline::FlatReadFloat64((r31 + 104));
    r26 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r31 + 128));
    r29 = 0x809C0000u;
}

loc_8070BE74:
{
    r4 = MemoryInline::FlatRead32((r27 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070BE7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BF1C;
    }
}

loc_8070BE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BE8C;
    }
}

loc_8070BE84:
{
    r28 = (r4 + 48);
    goto loc_8070BE90;
}

loc_8070BE8C:
{
    r28 = 0;
}

loc_8070BE90:
{
    r3 = MemoryInline::FlatRead32((r29 + 10392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070BE98:
{
    r3 = MemoryInline::FlatRead32((r3 + 256));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BEA8;
    }
}

loc_8070BEA0:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070BEAC;
}

loc_8070BEA8:
{
    r4 = -1;
}

loc_8070BEAC:
{
    r5 = (r1 + 136);
    ctx->lr = 0x8070BEB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f1.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f0.d = (f0.d - f30.d);
    f0.d = (f31.d * f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r28 = fctiwzword0;
}

loc_8070BEEC:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_8070BEF4;
    }
}

loc_8070BEF0:
{
    r28 = 0;
}

loc_8070BEF4:
{
    r3 = MemoryInline::FlatRead32((r27 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070BEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BF08;
    }
}

loc_8070BF00:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8070BF08:
{
    r3 = MemoryInline::FlatRead32((r27 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070BF10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BF1C;
    }
}

loc_8070BF14:
{
    r4 = r28;
    ctx->lr = 0x8070BF1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008F4C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070BF1C:
{
    r26 = (r26 + 1);
    r27 = (r27 + 4);
}

loc_8070BF28:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_8070BE74;
    }
}

loc_8070BF2C:
{
    r4 = MemoryInline::FlatRead32((r30 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070BF34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BFE4;
    }
}

loc_8070BF38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BF44;
    }
}

loc_8070BF3C:
{
    r28 = (r4 + 48);
    goto loc_8070BF48;
}

loc_8070BF44:
{
    r28 = 0;
}

loc_8070BF48:
{
    r3 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070BF50:
{
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r3 = MemoryInline::FlatRead32((r3 + 256));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BF64;
    }
}

loc_8070BF5C:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070BF68;
}

loc_8070BF64:
{
    r4 = -1;
}

loc_8070BF68:
{
    r5 = (r1 + 104);
    ctx->lr = 0x8070BF70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 104));
    r0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f4.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = (f1.d - f2.d);
    f1.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = (f0.d * f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r28 = fctiwzword1;
}

loc_8070BFB4:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_8070BFBC;
    }
}

loc_8070BFB8:
{
    r28 = 0;
}

loc_8070BFBC:
{
    r3 = MemoryInline::FlatRead32((r30 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070BFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BFD0;
    }
}

loc_8070BFC8:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8070BFD0:
{
    r3 = MemoryInline::FlatRead32((r30 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070BFD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BFE4;
    }
}

loc_8070BFDC:
{
    r4 = r28;
    ctx->lr = 0x8070BFE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008F4C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070BFE4:
{
    r4 = MemoryInline::FlatRead32((r30 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070BFEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C09C;
    }
}

loc_8070BFF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070BFFC;
    }
}

loc_8070BFF4:
{
    r28 = (r4 + 48);
    goto loc_8070C000;
}

loc_8070BFFC:
{
    r28 = 0;
}

loc_8070C000:
{
    r3 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C008:
{
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r3 = MemoryInline::FlatRead32((r3 + 256));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C01C;
    }
}

loc_8070C014:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070C020;
}

loc_8070C01C:
{
    r4 = -1;
}

loc_8070C020:
{
    r5 = (r1 + 72);
    ctx->lr = 0x8070C028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 104));
    r0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f4.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = (f1.d - f2.d);
    f1.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = (f0.d * f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r28 = fctiwzword2;
}

loc_8070C06C:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_8070C074;
    }
}

loc_8070C070:
{
    r28 = 0;
}

loc_8070C074:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C07C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C088;
    }
}

loc_8070C080:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8070C088:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C09C;
    }
}

loc_8070C094:
{
    r4 = r28;
    ctx->lr = 0x8070C09Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008F4C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070C09C:
{
    r4 = MemoryInline::FlatRead32((r30 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C0A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C154;
    }
}

loc_8070C0A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C0B4;
    }
}

loc_8070C0AC:
{
    r28 = (r4 + 48);
    goto loc_8070C0B8;
}

loc_8070C0B4:
{
    r28 = 0;
}

loc_8070C0B8:
{
    r3 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C0C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r3 = MemoryInline::FlatRead32((r3 + 256));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C0D4;
    }
}

loc_8070C0CC:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070C0D8;
}

loc_8070C0D4:
{
    r4 = -1;
}

loc_8070C0D8:
{
    r5 = (r1 + 40);
    ctx->lr = 0x8070C0E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 104));
    r0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f4.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = (f1.d - f2.d);
    f1.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = (f0.d * f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r28 = fctiwzword3;
}

loc_8070C124:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_8070C12C;
    }
}

loc_8070C128:
{
    r28 = 0;
}

loc_8070C12C:
{
    r3 = MemoryInline::FlatRead32((r30 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C134:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C140;
    }
}

loc_8070C138:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8070C140:
{
    r3 = MemoryInline::FlatRead32((r30 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C154;
    }
}

loc_8070C14C:
{
    r4 = r28;
    ctx->lr = 0x8070C154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008F4C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070C154:
{
    r4 = MemoryInline::FlatRead32((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C15C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C20C;
    }
}

loc_8070C160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C16C;
    }
}

loc_8070C164:
{
    r28 = (r4 + 48);
    goto loc_8070C170;
}

loc_8070C16C:
{
    r28 = 0;
}

loc_8070C170:
{
    r3 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C178:
{
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r3 = MemoryInline::FlatRead32((r3 + 256));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C18C;
    }
}

loc_8070C184:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070C190;
}

loc_8070C18C:
{
    r4 = -1;
}

loc_8070C190:
{
    r5 = (r1 + 8);
    ctx->lr = 0x8070C198u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    f2.d = MemoryInline::FlatReadFloat64((r31 + 104));
    r0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 128));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f4.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = (f1.d - f2.d);
    f1.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = (f0.d * f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f0.d);
    r28 = fctiwzword4;
}

loc_8070C1DC:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_8070C1E4;
    }
}

loc_8070C1E0:
{
    r28 = 0;
}

loc_8070C1E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C1EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C1F8;
    }
}

loc_8070C1F0:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8070C1F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C200:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C20C;
    }
}

loc_8070C204:
{
    r4 = r28;
    ctx->lr = 0x8070C20Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008F4C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070C20C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_8070C21C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8070C228;
    }
}

loc_8070C220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8070C224:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070C438;
    }
}

loc_8070C228:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 128), 0, 96u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r30 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_8070C23C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070C338;
    }
}

loc_8070C240:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10224));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8070C250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C438;
    }
}

loc_8070C254:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C284;
    }
}

loc_8070C264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C270;
    }
}

loc_8070C268:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C274;
}

loc_8070C270:
{
    r0 = -1;
}

loc_8070C274:
{
}

loc_8070C278:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(270))) {
        goto loc_8070C284;
    }
}

loc_8070C27C:
{
    r4 = (r30 + 128);
    goto loc_8070C304;
}

loc_8070C284:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C28C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C2B0;
    }
}

loc_8070C290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C29C;
    }
}

loc_8070C294:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C2A0;
}

loc_8070C29C:
{
    r0 = -1;
}

loc_8070C2A0:
{
}

loc_8070C2A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(270))) {
        goto loc_8070C2B0;
    }
}

loc_8070C2A8:
{
    r4 = (r30 + 132);
    goto loc_8070C304;
}

loc_8070C2B0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C2B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C2DC;
    }
}

loc_8070C2BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C2C8;
    }
}

loc_8070C2C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C2CC;
}

loc_8070C2C8:
{
    r0 = -1;
}

loc_8070C2CC:
{
}

loc_8070C2D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(270))) {
        goto loc_8070C2DC;
    }
}

loc_8070C2D4:
{
    r4 = (r30 + 136);
    goto loc_8070C304;
}

loc_8070C2DC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C2E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C304;
    }
}

loc_8070C2E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C2F4;
    }
}

loc_8070C2EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C2F8;
}

loc_8070C2F4:
{
    r0 = -1;
}

loc_8070C2F8:
{
}

loc_8070C2FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(270))) {
        goto loc_8070C304;
    }
}

loc_8070C300:
{
    r4 = (r30 + 140);
}

loc_8070C304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C318;
    }
}

loc_8070C30C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    ctx->lr = 0x8070C318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806F9EBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070C318:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 270;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->lr = 0x8070C334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8070C438;
}

loc_8070C338:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070C340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C438;
    }
}

loc_8070C344:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10224));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070C354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C438;
    }
}

loc_8070C358:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C388;
    }
}

loc_8070C368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C374;
    }
}

loc_8070C36C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C378;
}

loc_8070C374:
{
    r0 = -1;
}

loc_8070C378:
{
}

loc_8070C37C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(274))) {
        goto loc_8070C388;
    }
}

loc_8070C380:
{
    r4 = (r30 + 128);
    goto loc_8070C408;
}

loc_8070C388:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C3B4;
    }
}

loc_8070C394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C3A0;
    }
}

loc_8070C398:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C3A4;
}

loc_8070C3A0:
{
    r0 = -1;
}

loc_8070C3A4:
{
}

loc_8070C3A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(274))) {
        goto loc_8070C3B4;
    }
}

loc_8070C3AC:
{
    r4 = (r30 + 132);
    goto loc_8070C408;
}

loc_8070C3B4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C3BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C3E0;
    }
}

loc_8070C3C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C3CC;
    }
}

loc_8070C3C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C3D0;
}

loc_8070C3CC:
{
    r0 = -1;
}

loc_8070C3D0:
{
}

loc_8070C3D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(274))) {
        goto loc_8070C3E0;
    }
}

loc_8070C3D8:
{
    r4 = (r30 + 136);
    goto loc_8070C408;
}

loc_8070C3E0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C3E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C408;
    }
}

loc_8070C3EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C3F8;
    }
}

loc_8070C3F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070C3FC;
}

loc_8070C3F8:
{
    r0 = -1;
}

loc_8070C3FC:
{
}

loc_8070C400:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(274))) {
        goto loc_8070C408;
    }
}

loc_8070C404:
{
    r4 = (r30 + 140);
}

loc_8070C408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C40C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C41C;
    }
}

loc_8070C410:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    ctx->lr = 0x8070C41Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806F9EBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070C41C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 274;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->lr = 0x8070C438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070C438:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 200), 0, 80u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 224);
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 224));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8070BE0C func_8070BE0C preserves=false fpr_mask=0xE0000000
