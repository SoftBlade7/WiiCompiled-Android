#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80708D48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80708D48;

loc_80708D48:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 225));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80708D68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708ECC;
    }
}

loc_80708D6C:
{
    r4 = MemoryInline::FlatRead32((r3 + 128));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708D9C;
    }
}

loc_80708D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708D88;
    }
}

loc_80708D80:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708D8C;
}

loc_80708D88:
{
    r0 = -1;
}

loc_80708D8C:
{
}

loc_80708D90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_80708D9C;
    }
}

loc_80708D94:
{
    r31 = (r3 + 128);
    goto loc_80708E1C;
}

loc_80708D9C:
{
    r4 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708DC8;
    }
}

loc_80708DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708DB4;
    }
}

loc_80708DAC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708DB8;
}

loc_80708DB4:
{
    r0 = -1;
}

loc_80708DB8:
{
}

loc_80708DBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_80708DC8;
    }
}

loc_80708DC0:
{
    r31 = (r3 + 132);
    goto loc_80708E1C;
}

loc_80708DC8:
{
    r4 = MemoryInline::FlatRead32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708DF4;
    }
}

loc_80708DD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708DE0;
    }
}

loc_80708DD8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708DE4;
}

loc_80708DE0:
{
    r0 = -1;
}

loc_80708DE4:
{
}

loc_80708DE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_80708DF4;
    }
}

loc_80708DEC:
{
    r31 = (r3 + 136);
    goto loc_80708E1C;
}

loc_80708DF4:
{
    r4 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708E1C;
    }
}

loc_80708E00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708E0C;
    }
}

loc_80708E04:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708E10;
}

loc_80708E0C:
{
    r0 = -1;
}

loc_80708E10:
{
}

loc_80708E14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_80708E1C;
    }
}

loc_80708E18:
{
    r31 = (r3 + 140);
}

loc_80708E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80708E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708EAC;
    }
}

loc_80708E24:
{
    r4 = r31;
    r3 = (r1 + 8);
    ctx->lr = 0x80708E30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009ACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80708E38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80708E44;
    }
}

loc_80708E3C:
{
    // inline leaf 0x8009AAB0 (7 guest instruction(s))
}

loc_inl0_0x8009AAB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
}

loc_inl0_0x8009AAB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8009AAC4;
    }
}

loc_inl0_0x8009AABC:
{
    r3 = 0;
    goto loc_inl0_cont_8009AAB0;
}

loc_inl0_0x8009AAC4:
{
    r3 = MemoryInline::FlatRead32((r3 + 628));
}

loc_inl0_cont_8009AAB0:
{
    // end of inlined leaf 0x8009AAB0
    goto loc_80708E48;
}

loc_80708E44:
{
    r3 = 0;
}

loc_80708E48:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(48));
}

loc_80708E4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80708E60;
    }
}

loc_80708E50:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009ADC0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = 1;
    goto loc_80708E6C;
}

loc_80708E60:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009ADC0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = 0;
}

loc_80708E6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708ECC;
    }
}

loc_80708E74:
{
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708E7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708E88;
    }
}

loc_80708E80:
{
    r4 = 0;
    ctx->lr = 0x80708E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80708E88:
{
    r12 = MemoryInline::FlatRead32(r30);
    r5 = 0x808A0000u;
    r3 = r30;
    r4 = 413;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80708EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80708ECC;
}

loc_80708EAC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r5 = 0x808A0000u;
    r3 = r30;
    r4 = 413;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80708ECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80708ECC:
{
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80708D48 func_80708D48 preserves=true fpr_mask=0x00000000
