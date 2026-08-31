#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80061080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80061080;

loc_80061080:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006108C:
{
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006143C;
    }
}

loc_800610A4:
{
    r0 = (r4 & 255);
}

loc_800610AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80061158;
    }
}

loc_800610B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_800610B8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_800610D4;
    }
}

loc_800610BC:
{
    r0 = (r0 * 48);
    r3 = 0x802C0000u;
    r3 = (r3 + -17740);
    r3 = (r3 + r0);
    r29 = (r3 + 52);
    goto loc_800610D8;
}

loc_800610D4:
{
    r29 = 0;
}

loc_800610D8:
{
    r30 = 0x802C0000u;
    r0 = MemoryInline::FlatRead16((r30 + -17740));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800610E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061110;
    }
}

loc_800610E8:
{
    r3 = (r30 + -17740);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r3 + 4);
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    r0 = MemoryInline::FlatRead16((r30 + -17740));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r30 + -17740), static_cast<uint16_t>(r0));
}

loc_80061110:
{
    r30 = 0x802C0000u;
    r3 = r29;
    r30 = (r30 + -17740);
    r5 = r31;
    r4 = (r30 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    r4 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r5 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 * 48);
    r3 = (r30 + r0);
    r3 = (r3 + 5172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    goto loc_8006143C;
}

loc_80061158:
{
    r0 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(127));
}

loc_80061160:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8006141C;
    }
}

loc_80061164:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8006116C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(127))) {
        goto loc_80061188;
    }
}

loc_80061170:
{
    r0 = (r4 * 68);
    r3 = 0x802C0000u;
    r3 = (r3 + -28536);
    r3 = (r3 + r0);
    r3 = (r3 + 44);
    goto loc_8006118C;
}

loc_80061188:
{
    r3 = 0;
}

loc_8006118C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80061194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006141C;
    }
}

loc_80061198:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(127));
}

loc_8006119C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800611BC;
    }
}

loc_800611A0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = 0x802C0000u;
    r0 = (r0 * 68);
    r3 = (r3 + -28536);
    r3 = (r3 + r0);
    r29 = (r3 + 44);
    goto loc_800611C0;
}

loc_800611BC:
{
    r29 = 0;
}

loc_800611C0:
{
    r3 = r29;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077910u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r30 = 0x802C0000u;
    r0 = MemoryInline::FlatRead16((r30 + -17740));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800611D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061204;
    }
}

loc_800611DC:
{
    r3 = (r30 + -17740);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r3 + 4);
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    r0 = MemoryInline::FlatRead16((r30 + -17740));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r30 + -17740), static_cast<uint16_t>(r0));
}

loc_80061204:
{
    r5 = MemoryInline::FlatRead32(r29);
    r3 = 0x802C0000u;
    r3 = (r3 + -17740);
    r4 = 0;
    r0 = (r5 & 1);
}

loc_80061218:
{
    r30 = (r3 + 4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8006122C;
    }
}

loc_80061220:
{
    r0 = (r5 & 2);
}

loc_80061224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8006122C;
    }
}

loc_80061228:
{
    r4 = 1;
}

loc_8006122C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80061230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006125C;
    }
}

loc_80061234:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80061240:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800612DC;
    }
}

loc_80061244:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006124C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800612DC;
    }
}

loc_80061250:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80061258:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800612DC;
    }
}

loc_8006125C:
{
    r3 = r29;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800778F0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = r30;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f4.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_800612B0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800612EC;
    }
}

loc_800612C0:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800612C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800612EC;
    }
}

loc_800612C8:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800612CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800612EC;
    }
}

loc_800612D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29520));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    goto loc_800612EC;
}

loc_800612DC:
{
    r3 = (r1 + 56);
    r4 = r30;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
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
}

loc_800612EC:
{
    r3 = (r1 + 56);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -29524), 0, 3172u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3164u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3164u, (r2 + -26360));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3168u, (r2 + -26356));
        }
    }
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f3.d);
    // end of inlined leaf 0x8019AC24
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -29516));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80061308:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80061350;
    }
}

loc_8006130C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80061318:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80061350;
    }
}

loc_8006131C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29524));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8006132C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061344;
    }
}

loc_80061338:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -29520));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    goto loc_80061364;
}

loc_80061344:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -29512));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    goto loc_80061364;
}

loc_80061350:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -29524));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -29512));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_80061364:
{
    r3 = (r1 + 56);
    r4 = (r1 + 44);
    r5 = (r1 + 32);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -36), 0, 48u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_1, f10.d);
    // end of inlined leaf 0x8019ACCC
    r3 = (r1 + 32);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_2));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3164u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3164u, (r2 + -26360));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3168u, (r2 + -26356));
        }
    }
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    r5 = (r1 + 20);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_2, f10.d);
    // end of inlined leaf 0x8019ACCC
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 32));
    r3 = r31;
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r31, f0.d);
    r4 = r30;
    r5 = r31;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r1 + 56));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r1 + 60));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r1 + 64));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    r3 = 0x80240000u;
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r4 = r31;
    r5 = r31;
    r3 = (r3 + 32360);
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
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
    goto loc_8006143C;
}

loc_8006141C:
{
    r3 = 0x802C0000u;
    r4 = r31;
    r3 = (r3 + -17740);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7, f5.d);
    // end of inlined leaf 0x80199D30
}

loc_8006143C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x8000FFFF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80061080 func_80061080 preserves=true fpr_mask=0x00000000
