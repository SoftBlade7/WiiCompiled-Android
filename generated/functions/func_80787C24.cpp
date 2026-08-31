#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80787C24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80787C24;

loc_80787C24:
{
    f2.d = PpcFmulsInline(f3.d, f3.d);
    r10 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r10 + 18460));
}

loc_80787C34:
{
    r0 = 3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 33), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 34), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 35), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80787C78;
    }
}

loc_80787C68:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 269484032);
    r0 = (r0 | 4112);
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_80787C78:
{
}

loc_80787C7C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80787C90;
    }
}

loc_80787C80:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | 1077936128);
    r0 = (r0 | 16448);
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_80787C90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(-1));
}

loc_80787C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80787CF8;
    }
}

loc_80787C98:
{
    r0 = 0;
}

loc_80787CA0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r0))) {
        goto loc_80787CB0;
    }
}

loc_80787CA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
}

loc_80787CB0:
{
    r0 = 1;
}

loc_80787CB8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r0))) {
        goto loc_80787CC8;
    }
}

loc_80787CBC:
{
    r0 = MemoryInline::FlatRead8((r3 + 33));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
}

loc_80787CC8:
{
    r0 = 2;
}

loc_80787CD0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r0))) {
        goto loc_80787CE0;
    }
}

loc_80787CD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 34));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
}

loc_80787CE0:
{
    r0 = 3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_80787CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80787CF8;
    }
}

loc_80787CEC:
{
    r0 = MemoryInline::FlatRead8((r3 + 35));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_80787CF8:
{
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000401 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x00000005 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80787C24 func_80787C24 preserves=true fpr_mask=0x00000000
