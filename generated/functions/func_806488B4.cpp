#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806488B4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806488B4;

loc_806488B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806488E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648918;
    }
}

loc_806488E4:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7880);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80648918;
    }
}

loc_806488F0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80648900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80648910;
}

loc_80648904:
{
}

loc_80648908:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r31))) {
        goto loc_80648918;
    }
}

loc_8064890C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80648910:
{
}

loc_80648914:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80648904;
    }
}

loc_80648918:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_8064892C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806489DC;
    }
}

loc_80648930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80648974;
    }
}

loc_80648934:
{
}

loc_80648938:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(94))) {
        goto loc_8064895C;
    }
}

loc_8064893C:
{
}

loc_80648940:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_80648950;
    }
}

loc_80648944:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(85));
}

loc_80648948:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489AC;
    }
}

loc_8064894C:
{
    goto loc_806489DC;
}

loc_80648950:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_80648954:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489B4;
    }
}

loc_80648958:
{
    goto loc_806489DC;
}

loc_8064895C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_80648960:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806489DC;
    }
}

loc_80648964:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489CC;
    }
}

loc_80648968:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(125));
}

loc_8064896C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489C4;
    }
}

loc_80648970:
{
    goto loc_806489DC;
}

loc_80648974:
{
}

loc_80648978:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(161))) {
        goto loc_80648994;
    }
}

loc_8064897C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80648980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806489D4;
    }
}

loc_80648984:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489DC;
    }
}

loc_80648988:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(133));
}

loc_8064898C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489DC;
    }
}

loc_80648990:
{
    goto loc_806489BC;
}

loc_80648994:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(165));
}

loc_80648998:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806489BC;
    }
}

loc_8064899C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489DC;
    }
}

loc_806489A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(163));
}

loc_806489A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806489DC;
    }
}

loc_806489A8:
{
    goto loc_806489C4;
}

loc_806489AC:
{
    r4 = 2033;
    goto loc_806489E0;
}

loc_806489B4:
{
    r4 = 2034;
    goto loc_806489E0;
}

loc_806489BC:
{
    r4 = 5050;
    goto loc_806489E0;
}

loc_806489C4:
{
    r4 = 0;
    goto loc_806489E0;
}

loc_806489CC:
{
    r4 = 4003;
    goto loc_806489E0;
}

loc_806489D4:
{
    r4 = 6605;
    goto loc_806489E0;
}

loc_806489DC:
{
    r4 = 0;
}

loc_806489E0:
{
    r3 = (r30 + 676);
    r5 = 0;
    ctx->lr = 0x806489ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r3 = 2;
    MemoryInline::FlatWrite32((r30 + 3224), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806489FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80648A0C;
    }
}

loc_80648A00:
{
    r3 = (r30 + 2016);
    r4 = 0;
    ctx->lr = 0x80648A0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805BDAF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80648A0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806488B4 func_806488B4 preserves=true fpr_mask=0x00000000
