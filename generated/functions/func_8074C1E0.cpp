#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074C1E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8074C1E0;

loc_8074C1E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074C200:
{
    r4 = 0;
    ctr = r0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074C248;
    }
}

loc_8074C20C:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r7 + 1);
    r0 = (r0 * 20);
    r6 = (r5 + r4);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    r5 = (r5 + r0);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8074C228:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074C23C;
    }
}

loc_8074C230:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074C238:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8074C248;
    }
}

loc_8074C23C:
{
    r4 = (r4 + 20);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074C20C;
    }
}

loc_8074C248:
{
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8074C25C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074C268;
    }
}

loc_8074C260:
{
    f1.d = f2.d;
    goto loc_8074C27C;
}

loc_8074C268:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11476));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074C274:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074C27C;
    }
}

loc_8074C278:
{
    f1.d = f0.d;
}

loc_8074C27C:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = MemoryInline::FlatReadFloat32(r5);
    r12 = (r5 + 8);
    ctx->lr = 0x8074C290u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x000018FB gpr_return=0x00000018 fpr_read=0xFFFFFFF7 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8074C1E0 func_8074C1E0 preserves=true fpr_mask=0x00000000
