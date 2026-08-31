#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80708BAC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80708BAC;

loc_80708BAC:
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

loc_80708BCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708D30;
    }
}

loc_80708BD0:
{
    r4 = MemoryInline::FlatRead32((r3 + 128));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708BDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C00;
    }
}

loc_80708BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708BEC;
    }
}

loc_80708BE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708BF0;
}

loc_80708BEC:
{
    r0 = -1;
}

loc_80708BF0:
{
}

loc_80708BF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_80708C00;
    }
}

loc_80708BF8:
{
    r31 = (r3 + 128);
    goto loc_80708C80;
}

loc_80708C00:
{
    r4 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708C08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C2C;
    }
}

loc_80708C0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C18;
    }
}

loc_80708C10:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708C1C;
}

loc_80708C18:
{
    r0 = -1;
}

loc_80708C1C:
{
}

loc_80708C20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_80708C2C;
    }
}

loc_80708C24:
{
    r31 = (r3 + 132);
    goto loc_80708C80;
}

loc_80708C2C:
{
    r4 = MemoryInline::FlatRead32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708C34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C58;
    }
}

loc_80708C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C44;
    }
}

loc_80708C3C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708C48;
}

loc_80708C44:
{
    r0 = -1;
}

loc_80708C48:
{
}

loc_80708C4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_80708C58;
    }
}

loc_80708C50:
{
    r31 = (r3 + 136);
    goto loc_80708C80;
}

loc_80708C58:
{
    r4 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C80;
    }
}

loc_80708C64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708C70;
    }
}

loc_80708C68:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708C74;
}

loc_80708C70:
{
    r0 = -1;
}

loc_80708C74:
{
}

loc_80708C78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_80708C80;
    }
}

loc_80708C7C:
{
    r31 = (r3 + 140);
}

loc_80708C80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80708C84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708D10;
    }
}

loc_80708C88:
{
    r4 = r31;
    r3 = (r1 + 8);
    ctx->lr = 0x80708C94u;
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

loc_80708C9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80708CA8;
    }
}

loc_80708CA0:
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
    goto loc_80708CAC;
}

loc_80708CA8:
{
    r3 = 0;
}

loc_80708CAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(48));
}

loc_80708CB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80708CC4;
    }
}

loc_80708CB4:
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
    goto loc_80708CD0;
}

loc_80708CC4:
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

loc_80708CD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708CD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708D30;
    }
}

loc_80708CD8:
{
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708CE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708CEC;
    }
}

loc_80708CE4:
{
    r4 = 0;
    ctx->lr = 0x80708CECu;
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

loc_80708CEC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r5 = 0x808A0000u;
    r3 = r30;
    r4 = 412;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80708D0Cu;
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
    goto loc_80708D30;
}

loc_80708D10:
{
    r12 = MemoryInline::FlatRead32(r30);
    r5 = 0x808A0000u;
    r3 = r30;
    r4 = 412;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80708D30u;
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

loc_80708D30:
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
// RECOMP_REGISTRATION base 0x80708BAC func_80708BAC preserves=true fpr_mask=0x00000000
