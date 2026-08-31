#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806872A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806872A0;

loc_806872A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -11452));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 352u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 288u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r3 + 300));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 288u, (r3 + 296));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 268), 0, 140u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 268), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r5 + -11472));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r3 + 308), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 304u, (r3 + 312));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 360), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 308u, (r3 + 316));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 364), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 312u, (r3 + 320));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 368), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 316u, (r3 + 324));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 372), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 320u, (r3 + 328));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r3 + 376), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 324u, (r3 + 332));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r3 + 380), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 328u, (r3 + 336));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r3 + 384), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 332u, (r3 + 340));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r3 + 388), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 336u, (r3 + 344));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r3 + 392), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 340u, (r3 + 348));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r3 + 396), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 344u, (r3 + 352));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r3 + 400), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 348u, (r3 + 356));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r3 + 404), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->lr = 0x80687358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 306));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80687360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80687380;
    }
}

loc_80687364:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8684));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8068737Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80687394;
}

loc_80687380:
{
    r3 = MemoryInline::FlatRead32((r31 + 292));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80687394u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80687394:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x806873A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808204B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 420), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806872A0 func_806872A0 preserves=true fpr_mask=0x00000000
