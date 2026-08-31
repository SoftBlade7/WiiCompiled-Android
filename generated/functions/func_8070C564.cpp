#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070C564(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070C564;

loc_8070C564:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    f30.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070C588:
{
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 5856);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070C5B0;
    }
}

loc_8070C5A8:
{
    r3 = 0;
    goto loc_8070C72C;
}

loc_8070C5B0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = (r3 + 188);
    r12 = MemoryInline::FlatRead32((r12 + 248));
    ctr = r12;
    ctx->lr = 0x8070C5C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 188), 0, 37u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r29 + 224));
    r30 = r3;
}

loc_8070C5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070C620;
    }
}

loc_8070C5D4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead8((r3 + 41));
}

loc_8070C5E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8070C5FC;
    }
}

loc_8070C5E8:
{
}

loc_8070C5EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8070C608;
    }
}

loc_8070C5F0:
{
}

loc_8070C5F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8070C614;
    }
}

loc_8070C5F8:
{
    goto loc_8070C670;
}

loc_8070C5FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8070C670;
}

loc_8070C608:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8070C670;
}

loc_8070C614:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 140));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8070C670;
}

loc_8070C620:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
}

loc_8070C630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8070C65C;
    }
}

loc_8070C634:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 4);
}

loc_8070C64C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8070C670;
    }
}

loc_8070C650:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8070C670;
}

loc_8070C65C:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
}

loc_8070C664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070C670;
    }
}

loc_8070C668:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8070C670:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r29 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r3 & 32768);
}

loc_8070C684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070C6BC;
    }
}

loc_8070C688:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 188));
}

loc_8070C690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070C6A0;
    }
}

loc_8070C694:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_8070C6A0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C6A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C728;
    }
}

loc_8070C6AC:
{
    f1.d = f31.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8070C728;
}

loc_8070C6BC:
{
    r0 = (r3 & 128);
}

loc_8070C6C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070C6FC;
    }
}

loc_8070C6C4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 188));
}

loc_8070C6CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070C6DC;
    }
}

loc_8070C6D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_8070C6DC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C6E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C728;
    }
}

loc_8070C6E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r4 = 0;
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8070C728;
}

loc_8070C6FC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 188));
}

loc_8070C704:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070C710;
    }
}

loc_8070C708:
{
    f1.d = f30.d;
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_8070C710:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C718:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C728;
    }
}

loc_8070C71C:
{
    f1.d = f31.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_8070C728:
{
    r3 = r30;
}

loc_8070C72C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8070C564 func_8070C564 preserves=false fpr_mask=0xC0000000
