#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_806212FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t, uint32_t);

extern "C" void func_8061F9B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061F9B4;

loc_8061F9B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8061F9D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FBD0;
    }
}

loc_8061F9DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_8061F9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8061FA04;
    }
}

loc_8061F9E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8061F9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061FA70;
    }
}

loc_8061F9F0:
{
}

loc_8061F9F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8061FABC;
    }
}

loc_8061F9F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8061F9FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061FB18;
    }
}

loc_8061FA00:
{
    goto loc_8061FBD0;
}

loc_8061FA04:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8061FA14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FA24;
    }
}

loc_8061FA18:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    ctx->lr = 0x8061FA20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80669264u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061FBD0;
}

loc_8061FA24:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_8061FA30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(6))) {
        goto loc_8061FA54;
    }
}

loc_8061FA34:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FDC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 30076));
    // end of inlined leaf 0x80668FDC
}

loc_8061FA40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_8061FA54;
    }
}

loc_8061FA44:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_8061FA54:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213CC (6 guest instruction(s))
}

loc_inl4_0x806213CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x806213D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x806213D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl4_cont_806213CC;
}

loc_inl4_return:
{
}

loc_inl4_cont_806213CC:
{
    // end of inlined leaf 0x806213CC
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061FBD0;
}

loc_8061FA70:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_15C5 = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_15C5[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_15C5[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x806212FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061FA84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FBD0;
    }
}

loc_8061FA88:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x806690F8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16884));
    // end of inlined leaf 0x806690F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061FA98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FAB0;
    }
}

loc_8061FA9C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    ctx->lr = 0x8061FAA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066CB4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061FBD0;
}

loc_8061FAB0:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061FBD0;
}

loc_8061FABC:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8061FACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FADC;
    }
}

loc_8061FAD0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    ctx->lr = 0x8061FAD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80669264u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061FBD0;
}

loc_8061FADC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_8061FAE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FB0C;
    }
}

loc_8061FAEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FDC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 30076));
    // end of inlined leaf 0x80668FDC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_8061FAF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FB0C;
    }
}

loc_8061FAFC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_8061FB0C:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8061FBD0;
}

loc_8061FB18:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_8061FB20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8061FBD0;
    }
}

loc_8061FB24:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061FB34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FBD0;
    }
}

loc_8061FB38:
{
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8061FB44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061FB50;
    }
}

loc_8061FB48:
{
    r29 = 0;
    goto loc_8061FBA4;
}

loc_8061FB50:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061FBA0;
    }
}

loc_8061FB5C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8061FB70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8061FB88;
}

loc_8061FB74:
{
}

loc_8061FB78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8061FB84;
    }
}

loc_8061FB7C:
{
    r0 = 1;
    goto loc_8061FB94;
}

loc_8061FB84:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8061FB88:
{
}

loc_8061FB8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061FB74;
    }
}

loc_8061FB90:
{
    r0 = 0;
}

loc_8061FB94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061FB98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061FBA0;
    }
}

loc_8061FB9C:
{
    goto loc_8061FBA4;
}

loc_8061FBA0:
{
    r29 = 0;
}

loc_8061FBA4:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 31936));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r4 = 63;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8061FBD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8061FBD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061F9B4 func_8061F9B4 preserves=true fpr_mask=0x00000000
