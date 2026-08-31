#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B6910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B6910;

loc_807B6910:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 68), 0, 244u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r3 + 180));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 240u, (r3 + 308));
    f6.d = (-(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 132u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r3 + 200));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r3 + 204));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807B6948:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r3 + 208));
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = PpcFmulsInline(f1.d, f6.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 68));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 72));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 76));
        }
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 212));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWrite32((r3 + 312), r0);
    MemoryInline::FlatWriteFloat32((r3 + 324), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 328), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 332), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B69C8;
    }
}

loc_807B6988:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B69C8;
    }
}

loc_807B6994:
{
    r3 = r4;
    ctx->lr = 0x807B699Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807B69A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B69B0;
    }
}

loc_807B69A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_807B69A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B69BC;
    }
}

loc_807B69AC:
{
    goto loc_807B69C8;
}

loc_807B69B0:
{
    r3 = r31;
    ctx->lr = 0x807B69B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A30C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807B69C8;
}

loc_807B69BC:
{
    r3 = r31;
    r4 = (r31 + 324);
    ctx->lr = 0x807B69C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A3100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807B69C8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 120));
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r4 = (r4 & -5);
    r4 = (r4 | 8);
    MemoryInline::FlatWrite32((r31 + 120), r4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_807B69F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B6A28;
    }
}

loc_807B69F8:
{
    r5 = 0x808D0000u;
    r0 = (r4 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6A00:
{
    r5 = (r5 + 9736);
    r4 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B6A28;
    }
}

loc_807B6A1C:
{
    MemoryInline::FlatWrite32((r31 + 360), r4);
    MemoryInline::FlatWrite32((r31 + 364), r3);
    MemoryInline::FlatWrite32((r31 + 368), r0);
}

loc_807B6A28:
{
    r6 = 0x808D0000u;
    r6 = (r6 + 9748);
    r5 = MemoryInline::FlatRead32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r4 = (r4 + 12104);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = std::fabs(f0.d);
    MemoryInline::FlatWrite32((r31 + 376), r3);
    r3 = 0x808A0000u;
    r0 = (r0 * 116);
    f1.d = (-(f0.d));
    MemoryInline::FlatWrite32((r31 + 372), r5);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24972));
    r3 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r31 + 380), r3);
    r3 = (r4 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 320), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6A7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B6A84;
    }
}

loc_807B6A80:
{
    MemoryInline::FlatWriteFloat32((r31 + 320), f0.d);
}

loc_807B6A84:
{
    r30 = 0x808A0000u;
    r0 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24968));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    r0 = (r0 * 36);
    r4 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r3 = (r3 + r0);
    r3 = (r3 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80796BBCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0x809C0000u;
    r4 = (r4 + 12104);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24968));
    r0 = (r0 * 116);
    r3 = r31;
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 104));
    ctx->lr = 0x807B6ADCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6B68;
    }
}

loc_807B6AE8:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6AF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B6B2C;
    }
}

loc_807B6AF4:
{
    r3 = MemoryInline::FlatRead32((r31 + 308));
    ctx->lr = 0x807B6AFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD8D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f31.d = f1.d;
    r3 = r31;
    r4 = 0;
    // inline leaf 0x8079EC44 (21 guest instruction(s))
}

loc_inl0_0x8079EC44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x8079EC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8079EC68;
    }
}

loc_inl0_0x8079EC4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    goto loc_inl0_0x8079EC80;
}

loc_inl0_0x8079EC68:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
}

loc_inl0_0x8079EC80:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl0_cont_8079EC44:
{
    // end of inlined leaf 0x8079EC44
    r3 = MemoryInline::FlatRead32((r31 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_807B6B68;
}

loc_807B6B2C:
{
    r5 = MemoryInline::FlatRead32((r31 + 176));
    r3 = r31;
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    // inline leaf 0x8079EC44 (21 guest instruction(s))
}

loc_inl1_0x8079EC44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x8079EC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x8079EC68;
    }
}

loc_inl1_0x8079EC4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    goto loc_inl1_0x8079EC80;
}

loc_inl1_0x8079EC68:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
}

loc_inl1_0x8079EC80:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl1_cont_8079EC44:
{
    // end of inlined leaf 0x8079EC44
    r3 = MemoryInline::FlatRead32((r31 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24968));
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_807B6B68:
{
    r3 = MemoryInline::FlatRead32((r31 + 164));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xC00011FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807B6910 func_807B6910 preserves=false fpr_mask=0x80000000
