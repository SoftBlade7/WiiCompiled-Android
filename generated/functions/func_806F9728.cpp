#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F9728(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F9728;

loc_806F9728:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F9748:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F9758;
    }
}

loc_806F974C:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4288));
    goto loc_806F9894;
}

loc_806F9758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9764;
    }
}

loc_806F975C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F9768;
}

loc_806F9764:
{
    r0 = -1;
}

loc_806F9768:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(93));
}

loc_806F976C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F97A4;
    }
}

loc_806F9770:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(95));
}

loc_806F9774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F97A4;
    }
}

loc_806F9778:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(97));
}

loc_806F977C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F97A4;
    }
}

loc_806F9780:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_806F9784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F97A4;
    }
}

loc_806F9788:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(101));
}

loc_806F978C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F97A4;
    }
}

loc_806F9790:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(103));
}

loc_806F9794:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F97A4;
    }
}

loc_806F9798:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4288));
    goto loc_806F9894;
}

loc_806F97A4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x806F97ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A8DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F97B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F97C0;
    }
}

loc_806F97B8:
{
    r3 = 0;
    goto loc_806F97D0;
}

loc_806F97C0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 16);
    r3 = (r3 + 256);
    ctx->lr = 0x806F97D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A6490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806F97D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F97D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F97F0;
    }
}

loc_806F97D8:
{
    r4 = 0x808A0000u;
    r3 = (r1 + 8);
    f31.d = MemoryInline::FlatReadFloat32((r4 + 4288));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A8EF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    f1.d = f31.d;
    goto loc_806F9894;
}

loc_806F97F0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    // inline leaf 0x807137EC (2 guest instruction(s))
    r3 = 30;
    // end of inlined leaf 0x807137EC
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r5 = 1127219200;
    r4 = MemoryInline::FlatRead32((r1 + 28));
    r6 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    r4 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat64((r6 + 3816));
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    r7 = 0x88890000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 4304));
    r8 = (r3 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r3 = (r7 + -30583);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r0 + r8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    f0.d = MemoryInline::FlatReadFloat64((r4 + 4296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    r0 = (r0 + r5);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f31.d = (f0.d + f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A8EF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    f1.d = f31.d;
}

loc_806F9894:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F9728 func_806F9728 preserves=false fpr_mask=0x80000000
