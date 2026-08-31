#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DFF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DFF20;

loc_801DFF20:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
}

loc_801DFF2C:
{
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRam32((r1 + 188), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801DFF60;
    }
}

loc_801DFF50:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r0 = (r3 + 5888);
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DFF88;
}

loc_801DFF60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801DFF64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DFF78;
    }
}

loc_801DFF68:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r0 = (r3 + 6016);
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DFF88;
}

loc_801DFF78:
{
    r0 = 0;
    r3 = -3;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801E00F8;
}

loc_801DFF88:
{
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + -1466105856);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(21606));
}

loc_801DFF98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E00CC;
    }
}

loc_801DFF9C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r30 = (r3 + 2048);
    ctx->lr = 0x801DFFA8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC74Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    r4 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D9FFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r3 + 14);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_801DFFBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DFFC8;
    }
}

loc_801DFFC0:
{
    r3 = -11;
    goto loc_801E002C;
}

loc_801DFFC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_801DFFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0000;
    }
}

loc_801DFFD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E0020;
    }
}

loc_801DFFD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801DFFD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DFFE0;
    }
}

loc_801DFFDC:
{
    goto loc_801E0020;
}

loc_801DFFE0:
{
    r6 = 0x802A0000u;
    r3 = r30;
    r5 = r31;
    r4 = (r13 + -28240);
    r6 = (r6 + 6840);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801DFFFCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DA71Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_801E0028;
}

loc_801E0000:
{
    r6 = 0x802A0000u;
    r3 = r30;
    r5 = r31;
    r4 = (r13 + -28240);
    r6 = (r6 + 6856);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801E001Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DA71Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_801E0028;
}

loc_801E0020:
{
    r3 = -3;
    goto loc_801E002C;
}

loc_801E0028:
{
    r3 = 0;
}

loc_801E002C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E0030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0038;
    }
}

loc_801E0034:
{
    goto loc_801E00F8;
}

loc_801E0038:
{
    r4 = r30;
    r3 = (r1 + 8);
    r5 = 2;
    ctx->lr = 0x801E0048u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E004C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0054;
    }
}

loc_801E0050:
{
    goto loc_801E00F8;
}

loc_801E0054:
{
    r31 = MemoryInline::FlatRead32(r29);
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801E0068u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E006C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0078;
    }
}

loc_801E0070:
{
    r31 = r3;
    goto loc_801E00B0;
}

loc_801E0078:
{
    r3 = r31;
    r5 = (r1 + 8);
    r4 = 128;
    ctx->lr = 0x801E0088u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E008C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E0098;
    }
}

loc_801E0090:
{
    r31 = r3;
    goto loc_801E00B0;
}

loc_801E0098:
{
    r3 = MemoryInline::FlatRead32(r31);
    r31 = 0;
    r0 = (r3 + -1466105856);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(21606));
}

loc_801E00A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E00B0;
    }
}

loc_801E00AC:
{
    r31 = -14;
}

loc_801E00B0:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801E00B8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801E00BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E00CC;
    }
}

loc_801E00C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E00C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E00CC;
    }
}

loc_801E00C8:
{
    r31 = r3;
}

loc_801E00CC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801E00D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E00E4;
    }
}

loc_801E00DC:
{
    r3 = -27;
    goto loc_801E00F8;
}

loc_801E00E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E00EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E00F4;
    }
}

loc_801E00F0:
{
    r31 = -14;
}

loc_801E00F4:
{
    r3 = r31;
}

loc_801E00F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    r28 = MemoryInline::FlatRead32((r1 + 176));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DFF20 func_801DFF20 preserves=true fpr_mask=0x00000000
