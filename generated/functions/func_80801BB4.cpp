#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80801BB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80801BB4;

loc_80801BB4:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r0 = 1127219200;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -21040);
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r29 = MemoryInline::FlatRead32((r4 + 32));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    r3 = MemoryInline::FlatRead32((r5 + 40));
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80557340
    r6 = MemoryInline::FlatRead32((r30 + 184));
    r5 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r5);
    r4 = 0x808D0000u;
    r0 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 20216));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 72));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r4 = MemoryInline::FlatRead16((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80801C4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80801C58;
    }
}

loc_80801C50:
{
    r29 = 2;
    goto loc_80802740;
}

loc_80801C58:
{
}

loc_80801C5C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r6))) {
        goto loc_80801EC8;
    }
}

loc_80801C60:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    r29 = MemoryInline::FlatRead8((r30 + 205));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80801C7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801C8C;
    }
}

loc_80801C80:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 204), static_cast<uint8_t>(r0));
    goto loc_80801EC0;
}

loc_80801C8C:
{
    r0 = MemoryInline::FlatRead8((r30 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801C94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801DF8;
    }
}

loc_80801C98:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80801CB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 176u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 168u, (r31 + 168));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80801CC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80801CD4;
    }
}

loc_80801CCC:
{
    f1.d = f0.d;
    goto loc_80801CE0;
}

loc_80801CD4:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80801CD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80801CE0;
    }
}

loc_80801CDC:
{
    f1.d = f2.d;
}

loc_80801CE0:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 168u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 168u, (r31 + 168));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 172u, (r31 + 172));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 112u, (r31 + 112));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r31);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80801D04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801D10;
    }
}

loc_80801D08:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 204), static_cast<uint8_t>(r0));
}

loc_80801D10:
{
}

loc_80801D14:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80801D20;
    }
}

loc_80801D18:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 88u, (r31 + 88));
    goto loc_80801D24;
}

loc_80801D20:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 156u, (r31 + 156));
}

loc_80801D24:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801D38:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801DF0;
    }
}

loc_80801D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80801D54;
    }
}

loc_80801D4C:
{
    r3 = (r30 + 72);
    goto loc_80801D84;
}

loc_80801D54:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 164);
    r4 = (r30 + 88);
    ctx->lr = 0x80801D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801D84:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801D90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80801D9C;
    }
}

loc_80801D94:
{
    r4 = (r30 + 72);
    goto loc_80801DCC;
}

loc_80801D9C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 152);
    r4 = (r30 + 88);
    ctx->lr = 0x80801DB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801DCC:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801DF0:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    goto loc_80801EC0;
}

loc_80801DF8:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801E04:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801EBC;
    }
}

loc_80801E14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80801E20;
    }
}

loc_80801E18:
{
    r3 = (r30 + 72);
    goto loc_80801E50;
}

loc_80801E20:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 188);
    r4 = (r30 + 88);
    ctx->lr = 0x80801E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801E50:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80801E68;
    }
}

loc_80801E60:
{
    r4 = (r30 + 72);
    goto loc_80801E98;
}

loc_80801E68:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 176);
    r4 = (r30 + 88);
    ctx->lr = 0x80801E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 176));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 180));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 184));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801E98:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801EBC:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f30.d);
}

loc_80801EC0:
{
    r29 = 0;
    goto loc_80802740;
}

loc_80801EC8:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 20220));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 204), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80801EF0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801FC8;
    }
}

loc_80801EF8:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801F04:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801FBC;
    }
}

loc_80801F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80801F20;
    }
}

loc_80801F18:
{
    r3 = (r30 + 72);
    goto loc_80801F50;
}

loc_80801F20:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 128);
    r4 = (r30 + 88);
    ctx->lr = 0x80801F34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801F50:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80801F5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80801F68;
    }
}

loc_80801F60:
{
    r4 = (r30 + 72);
    goto loc_80801F98;
}

loc_80801F68:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 140);
    r4 = (r30 + 88);
    ctx->lr = 0x80801F7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801F98:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80801FBC:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f30.d);
    r29 = 0;
    goto loc_80802740;
}

loc_80801FC8:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 204), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80801FEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808021B4;
    }
}

loc_80801FF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80801FF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802000;
    }
}

loc_80801FF8:
{
    r29 = 2;
    goto loc_80802740;
}

loc_80802000:
{
    r0 = MemoryInline::FlatRead8((r30 + 205));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_1 & 134217727);
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8080202Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    f31.d = f1.d;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80802048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802054;
    }
}

loc_8080204C:
{
    r29 = 1;
    goto loc_80802740;
}

loc_80802054:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80802058:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802074;
    }
}

loc_8080205C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80802064:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802074;
    }
}

loc_8080206C:
{
    r29 = 2;
    goto loc_80802740;
}

loc_80802074:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 176u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80802084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80802090;
    }
}

loc_80802088:
{
    f1.d = f0.d;
    goto loc_808020A0;
}

loc_80802090:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r31 + 168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80802098:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808020A0;
    }
}

loc_8080209C:
{
    f1.d = f0.d;
}

loc_808020A0:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 168u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r31 + 168));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r31 + 172));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r31 + 112));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808020C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808021AC;
    }
}

loc_808020C8:
{
}

loc_808020CC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_808020D8;
    }
}

loc_808020D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r31 + 88));
    goto loc_808020DC;
}

loc_808020D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r31 + 156));
}

loc_808020DC:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808020F0:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808021A8;
    }
}

loc_80802100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080210C;
    }
}

loc_80802104:
{
    r3 = (r30 + 72);
    goto loc_8080213C;
}

loc_8080210C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 116);
    r4 = (r30 + 88);
    ctx->lr = 0x80802120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_8080213C:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80802148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80802154;
    }
}

loc_8080214C:
{
    r4 = (r30 + 72);
    goto loc_80802184;
}

loc_80802154:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 104);
    r4 = (r30 + 88);
    ctx->lr = 0x80802168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802184:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_808021A8:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
}

loc_808021AC:
{
    r29 = 1;
    goto loc_80802740;
}

loc_808021B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 188));
    MemoryInline::FlatWriteRam32((r1 + 204), r5);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_808021DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808021E8;
    }
}

loc_808021E0:
{
    r29 = 2;
    goto loc_80802740;
}

loc_808021E8:
{
}

loc_808021EC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r3))) {
        goto loc_80802460;
    }
}

loc_808021F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 205));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_2 & 134217727);
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80802214:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802224;
    }
}

loc_80802218:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 204), static_cast<uint8_t>(r0));
    goto loc_80802458;
}

loc_80802224:
{
    r0 = MemoryInline::FlatRead8((r30 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8080222C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802390;
    }
}

loc_80802230:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80802250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_3 = MemoryInline::ResolveRangeHost(r31, 0, 176u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 168u, (r31 + 168));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80802260:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080226C;
    }
}

loc_80802264:
{
    f1.d = f0.d;
    goto loc_80802278;
}

loc_8080226C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80802270:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80802278;
    }
}

loc_80802274:
{
    f1.d = f2.d;
}

loc_80802278:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 168u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 168u, (r31 + 168));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 172u, (r31 + 172));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r31 + 112));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r31);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8080229C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808022A8;
    }
}

loc_808022A0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 204), static_cast<uint8_t>(r0));
}

loc_808022A8:
{
}

loc_808022AC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_808022B8;
    }
}

loc_808022B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 88u, (r31 + 88));
    goto loc_808022BC;
}

loc_808022B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 156u, (r31 + 156));
}

loc_808022BC:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808022D0:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802388;
    }
}

loc_808022E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808022EC;
    }
}

loc_808022E4:
{
    r3 = (r30 + 72);
    goto loc_8080231C;
}

loc_808022EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 68);
    r4 = (r30 + 88);
    ctx->lr = 0x80802300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_8080231C:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80802328:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80802334;
    }
}

loc_8080232C:
{
    r4 = (r30 + 72);
    goto loc_80802364;
}

loc_80802334:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 56);
    r4 = (r30 + 88);
    ctx->lr = 0x80802348u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802364:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802388:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    goto loc_80802458;
}

loc_80802390:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8080239C:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802454;
    }
}

loc_808023AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808023B8;
    }
}

loc_808023B0:
{
    r3 = (r30 + 72);
    goto loc_808023E8;
}

loc_808023B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 92);
    r4 = (r30 + 88);
    ctx->lr = 0x808023CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_808023E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808023F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80802400;
    }
}

loc_808023F8:
{
    r4 = (r30 + 72);
    goto loc_80802430;
}

loc_80802400:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 80);
    r4 = (r30 + 88);
    ctx->lr = 0x80802414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802430:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802454:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
}

loc_80802458:
{
    r29 = 0;
    goto loc_80802740;
}

loc_80802460:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 204), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80802480:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802558;
    }
}

loc_80802488:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r29 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80802498:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802550;
    }
}

loc_808024A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808024B4;
    }
}

loc_808024AC:
{
    r3 = (r30 + 72);
    goto loc_808024E4;
}

loc_808024B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 32);
    r4 = (r30 + 88);
    ctx->lr = 0x808024C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_808024E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808024F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808024FC;
    }
}

loc_808024F4:
{
    r4 = (r30 + 72);
    goto loc_8080252C;
}

loc_808024FC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 44);
    r4 = (r30 + 88);
    ctx->lr = 0x80802510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_8080252C:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802550:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f30.d);
    goto loc_80802740;
}

loc_80802558:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 204), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8080257C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080273C;
    }
}

loc_80802580:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80802584:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802590;
    }
}

loc_80802588:
{
    r29 = 2;
    goto loc_80802740;
}

loc_80802590:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    r29 = MemoryInline::FlatRead8((r30 + 205));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x808025B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    f31.d = f1.d;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808025D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808025DC;
    }
}

loc_808025D4:
{
    r29 = 1;
    goto loc_80802740;
}

loc_808025DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_808025E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808025FC;
    }
}

loc_808025E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_808025EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808025FC;
    }
}

loc_808025F4:
{
    r29 = 2;
    goto loc_80802740;
}

loc_808025FC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 176u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r31 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080260C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80802618;
    }
}

loc_80802610:
{
    f1.d = f0.d;
    goto loc_80802628;
}

loc_80802618:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 168u, (r31 + 168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80802620:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80802628;
    }
}

loc_80802624:
{
    f1.d = f0.d;
}

loc_80802628:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 168u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 168u, (r31 + 168));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 172u, (r31 + 172));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 112u, (r31 + 112));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r31);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8080264C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80802734;
    }
}

loc_80802650:
{
}

loc_80802654:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80802660;
    }
}

loc_80802658:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r31 + 88));
    goto loc_80802664;
}

loc_80802660:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 156u, (r31 + 156));
}

loc_80802664:
{
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80802678:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80802730;
    }
}

loc_80802688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80802694;
    }
}

loc_8080268C:
{
    r3 = (r30 + 72);
    goto loc_808026C4;
}

loc_80802694:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r30 + 88);
    ctx->lr = 0x808026A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_808026C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808026D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808026DC;
    }
}

loc_808026D4:
{
    r4 = (r30 + 72);
    goto loc_8080270C;
}

loc_808026DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r30 + 88);
    ctx->lr = 0x808026F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_8080270C:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80802730:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
}

loc_80802734:
{
    r29 = 1;
    goto loc_80802740;
}

loc_8080273C:
{
    r29 = 2;
}

loc_80802740:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80802758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80802778;
    }
}

loc_8080275C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r29 & 65535);
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 88));
    ctx->lr = 0x80802778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80802778:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    r30 = MemoryInline::FlatRead32((r1 + 232));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    r29 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80801BB4 func_80801BB4 preserves=false fpr_mask=0xC0000000
