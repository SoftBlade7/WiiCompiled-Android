#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807ADC5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807ADC5C;

loc_807ADC5C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23288);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 372));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 732));
    r4 = MemoryInline::FlatRead32((r3 + 640));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 732), f2.d);
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807ADCA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADCC4;
    }
}

loc_807ADCA4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_807ADCB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807ADCC4;
    }
}

loc_807ADCB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    ctx->lr = 0x807ADCC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B4430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807ADCD4;
}

loc_807ADCC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 736));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 732));
    ctx->lr = 0x807ADCD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B4430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807ADCD4:
{
    r0 = MemoryInline::FlatRead8((r30 + 758));
}

loc_807ADCDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807ADD4C;
    }
}

loc_807ADCE0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14523));
}

loc_807ADCEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807ADCF8;
    }
}

loc_807ADCF0:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 360));
    goto loc_807ADD28;
}

loc_807ADCF8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2924));
}

loc_807ADD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807ADD1C;
    }
}

loc_807ADD0C:
{
}

loc_807ADD10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_807ADD24;
    }
}

loc_807ADD14:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 344));
    goto loc_807ADD28;
}

loc_807ADD1C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 368));
    goto loc_807ADD28;
}

loc_807ADD24:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 364));
}

loc_807ADD28:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 736));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 376));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807ADD38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ADD40;
    }
}

loc_807ADD3C:
{
    goto loc_807ADD44;
}

loc_807ADD40:
{
    f2.d = f0.d;
}

loc_807ADD44:
{
    MemoryInline::FlatWriteFloat32((r30 + 736), f2.d);
    goto loc_807ADD68;
}

loc_807ADD4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 736));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807ADD58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ADD68;
    }
}

loc_807ADD5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 736), f0.d);
}

loc_807ADD68:
{
    r4 = MemoryInline::FlatRead32((r30 + 712));
}

loc_807ADD70:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_807ADDB4;
    }
}

loc_807ADD74:
{
    r3 = MemoryInline::FlatRead32((r30 + 640));
    r0 = MemoryInline::FlatRead8((r3 + 568));
}

loc_807ADD80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807ADDAC;
    }
}

loc_807ADD84:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
}

loc_807ADD94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807ADDB4;
    }
}

loc_807ADD98:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_807ADDA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(29))) {
        goto loc_807ADDB4;
    }
}

loc_807ADDAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 758), static_cast<uint8_t>(r0));
}

loc_807ADDB4:
{
}

loc_807ADDB8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(24))) {
        goto loc_807ADDC4;
    }
}

loc_807ADDBC:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 708), r0);
}

loc_807ADDC4:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 760));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 388));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 752));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f12.d = MemoryInline::FlatReadFloat32((r31 + 280));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f12.d);
}

loc_807ADDE4:
{
    MemoryInline::FlatWriteFloat32((r30 + 752), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807ADDF0;
    }
}

loc_807ADDEC:
{
    goto loc_807ADDF4;
}

loc_807ADDF0:
{
    f12.d = f0.d;
}

loc_807ADDF4:
{
    f8.d = MemoryInline::FlatReadFloat32((r30 + 804));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 248));
    r3 = r30;
    f6.d = MemoryInline::FlatReadFloat32((r30 + 808));
    r4 = (r30 + 804);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 812));
    f11.d = MemoryInline::FlatReadFloat32((r30 + 652));
    f5.d = PpcFmulsInline(f8.d, f1.d);
    f9.d = MemoryInline::FlatReadFloat32((r30 + 644));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f10.d = MemoryInline::FlatReadFloat32((r30 + 752));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f9.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f10.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f11.d);
    r5 = 0;
    f2.d = PpcFmulsInline(f7.d, f0.d);
    f1.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 760), f12.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 804), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 808), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 812), f0.d);
    ctx->lr = 0x807ADE84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807ACE1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r30;
    r4 = 260;
    ctx->lr = 0x807ADE94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFC7 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807ADC5C func_807ADC5C preserves=true fpr_mask=0x00000000
