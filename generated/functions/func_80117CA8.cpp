#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80117CA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80117CA8;

loc_80117CA8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117CB4:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117CD0;
    }
}

loc_80117CCC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26696));
}

loc_80117CD0:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x80117CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F00DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117CE4:
{
    r31 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117CF4;
    }
}

loc_80117CEC:
{
    r3 = 0;
    goto loc_80117F50;
}

loc_80117CF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117CFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117DFC;
    }
}

loc_80117D00:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117D0C;
    }
}

loc_80117D04:
{
    r4 = 0;
    goto loc_80117D20;
}

loc_80117D0C:
{
}

loc_80117D10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117D1C;
    }
}

loc_80117D14:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80117D20;
}

loc_80117D1C:
{
    r4 = (r3 + 16);
}

loc_80117D20:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r30 = (r13 + -26712);
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32(r29);
    r0 = (r5 + 1);
    r4 = (r5 * r4);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r4 = (r6 + r4);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r13 + -26712), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117D50:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80117D5C;
    }
}

loc_80117D54:
{
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117DD0;
}

loc_80117D5C:
{
}

loc_80117D60:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80117D70;
    }
}

loc_80117D64:
{
    f0.d = MemoryInline::FlatReadFloat64(r30);
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117DD0;
}

loc_80117D70:
{
}

loc_80117D74:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80117DD0;
    }
}

loc_80117D78:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117D88;
    }
}

loc_80117D84:
{
    ctx->lr = 0x80117D88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80117D88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80117D8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117D98;
    }
}

loc_80117D90:
{
    r5 = 0;
    goto loc_80117DCC;
}

loc_80117D98:
{
    r3 = r30;
    ctx->lr = 0x80117DA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117DC0;
}

loc_80117DAC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117DB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80117DBC;
    }
}

loc_80117DB8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_80117DBC:
{
    r3 = (r3 + 1);
}

loc_80117DC0:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117DAC;
    }
}

loc_80117DCC:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_80117DD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117DD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117DE0;
    }
}

loc_80117DD8:
{
    r3 = 0;
    goto loc_80117F50;
}

loc_80117DE0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117DE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117DF4;
    }
}

loc_80117DEC:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_80117F50;
}

loc_80117DF4:
{
    r3 = (r31 + 16);
    goto loc_80117F50;
}

loc_80117DFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80117E00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117F30;
    }
}

loc_80117E04:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117E10;
    }
}

loc_80117E08:
{
    r6 = 0;
    goto loc_80117E24;
}

loc_80117E10:
{
}

loc_80117E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117E20;
    }
}

loc_80117E18:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80117E24;
}

loc_80117E20:
{
    r6 = (r3 + 16);
}

loc_80117E24:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r30 = (r13 + -26704);
    r0 = (r4 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -27416));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 1);
    r0 = (r4 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64(r6);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = (f1.d - f3.d);
    f1.d = MemoryInline::FlatReadFloat64(r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    f2.d = (f2.d * f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWrite32((r3 + 8), r4);
    f0.d = (f0.d - f3.d);
    f1.d = (f1.d + f2.d);
    f0.d = (f1.d / f0.d);
    MemoryInline::FlatWriteFloat64((r13 + -26704), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80117E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117E94;
    }
}

loc_80117E88:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117F04;
}

loc_80117E94:
{
}

loc_80117E98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80117EA4;
    }
}

loc_80117E9C:
{
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117F04;
}

loc_80117EA4:
{
}

loc_80117EA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117F04;
    }
}

loc_80117EAC:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117EB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117EBC;
    }
}

loc_80117EB8:
{
    ctx->lr = 0x80117EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80117EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80117EC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117ECC;
    }
}

loc_80117EC4:
{
    r5 = 0;
    goto loc_80117F00;
}

loc_80117ECC:
{
    r3 = r30;
    ctx->lr = 0x80117ED4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117EF4;
}

loc_80117EE0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117EE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80117EF0;
    }
}

loc_80117EEC:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_80117EF0:
{
    r3 = (r3 + 1);
}

loc_80117EF4:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80117EE0;
    }
}

loc_80117F00:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_80117F04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117F08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117F14;
    }
}

loc_80117F0C:
{
    r3 = 0;
    goto loc_80117F50;
}

loc_80117F14:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117F28;
    }
}

loc_80117F20:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_80117F50;
}

loc_80117F28:
{
    r3 = (r31 + 16);
    goto loc_80117F50;
}

loc_80117F30:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117F3C;
    }
}

loc_80117F34:
{
    r3 = 0;
    goto loc_80117F50;
}

loc_80117F3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117F40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117F4C;
    }
}

loc_80117F44:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_80117F50;
}

loc_80117F4C:
{
    r3 = (r3 + 16);
}

loc_80117F50:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80117CA8 func_80117CA8 preserves=true fpr_mask=0x00000000
