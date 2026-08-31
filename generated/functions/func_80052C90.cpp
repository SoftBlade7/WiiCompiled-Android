#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052C90(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80052C90;

loc_80052C90:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80052CAC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052DDC;
    }
}

loc_80052CB8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 36u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 20));
    r30 = 0;
    r0 = (r3 & 8);
}

loc_80052CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052CE0;
    }
}

loc_80052CC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29856));
    r30 = (r30 | 24);
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    goto loc_80052D04;
}

loc_80052CE0:
{
    r0 = (r3 & 16);
}

loc_80052CE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052CEC;
    }
}

loc_80052CE8:
{
    r30 = (r30 | 16);
}

loc_80052CEC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 32));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 36));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 40));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
}

loc_80052D04:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052D0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052D20;
    }
}

loc_80052D10:
{
    r3 = (r4 + 28);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x80199D04
    r30 = (r30 | 32);
    goto loc_80052D68;
}

loc_80052D20:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 44));
    r3 = (r4 + 28);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 48));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 52));
        }
    }
    MemoryInline::FlatWriteFloat32((r4 + 24), f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29852));
    MemoryInline::FlatWriteFloat32((r4 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 20), f5.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 52));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 48));
        }
    }
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 44));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_80052D68:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 & 2);
}

loc_80052D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052D7C;
    }
}

loc_80052D74:
{
    r30 = (r30 | 64);
    goto loc_80052D94;
}

loc_80052D7C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r29 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
}

loc_80052D94:
{
    r0 = (r30 & 32);
}

loc_80052D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052DB4;
    }
}

loc_80052D9C:
{
    r0 = (r30 & 64);
}

loc_80052DA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052DB4;
    }
}

loc_80052DA4:
{
    r30 = (r30 | 4);
    r0 = (r30 & 8);
}

loc_80052DAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052DB4;
    }
}

loc_80052DB0:
{
    r30 = (r30 | 2);
}

loc_80052DB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r30 = (r30 | -2147483648);
    r30 = (r30 | 1);
    r0 = (r3 & 32);
}

loc_80052DC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052DCC;
    }
}

loc_80052DC8:
{
    r30 = (r30 | 1024);
}

loc_80052DCC:
{
    r0 = (r3 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052DD8;
    }
}

loc_80052DD4:
{
    r30 = (r30 | 2048);
}

loc_80052DD8:
{
    MemoryInline::FlatWrite32(r29, r30);
}

loc_80052DDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000DF gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052C90 func_80052C90 preserves=true fpr_mask=0x00000000
