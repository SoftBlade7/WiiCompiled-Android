#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D43C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071D43C;

loc_8071D43C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r3 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 8272);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    r29 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f0.d);
    ctx->lr = 0x8071D48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f31.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8071D49C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071D4DC;
    }
}

loc_8071D4A0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8071D4B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071D4F0;
    }
}

loc_8071D4BC:
{
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8071D4C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071D4D0;
    }
}

loc_8071D4C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    goto loc_8071D4F0;
}

loc_8071D4D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    goto loc_8071D4F0;
}

loc_8071D4DC:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071D4E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071D4EC;
    }
}

loc_8071D4E4:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 36));
    goto loc_8071D4F0;
}

loc_8071D4EC:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 40));
}

loc_8071D4F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -27568));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071D504:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071D570;
    }
}

loc_8071D508:
{
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r3 = -1240793088;
    r0 = (r3 + 24759);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    r3 = (r31 + r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r3 = MemoryInline::FlatRead32((r31 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    r4 = (r3 + 1);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    MemoryInline::FlatWriteFloat32((r31 + 12), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 7);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 180);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_8071D570:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001F gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8071D43C func_8071D43C preserves=false fpr_mask=0x80000000
