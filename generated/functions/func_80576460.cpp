#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80576460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80576460;

loc_80576460:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r5 = 0x80890000u;
    r5 = (r5 + 6136);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80576470:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80576488;
    }
}

loc_80576474:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 152));
    r0 = (r5 + 8);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    goto loc_805764C8;
}

loc_80576488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8057648C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805764A8;
    }
}

loc_80576490:
{
    r4 = (r5 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 156));
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    goto loc_805764C8;
}

loc_805764A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_805764B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805764C8;
    }
}

loc_805764B4:
{
    r4 = (r5 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 160));
    r0 = (r4 + 32);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
}

loc_805764C8:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 40u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 40), f0.d);
    f3.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 128));
    f4.d = f2.d;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 48), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 36), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 44), f1.d);
    r3 = (r3 + 60);
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80576460 func_80576460 preserves=true fpr_mask=0x00000000
