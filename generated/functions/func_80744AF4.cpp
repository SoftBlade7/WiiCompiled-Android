#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80744AF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80744AF4;

loc_80744AF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 11144));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11148));
    r6 = MemoryInline::FlatRead32((r3 + 188));
    r7 = MemoryInline::FlatRead32((r3 + 196));
    r6 = MemoryInline::FlatRead32(r6);
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r4 = MemoryInline::FlatRead32((r5 + 328));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 192), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 192), r4);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    MemoryInline::FlatWrite8((r7 + 12), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 208), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 204), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 200), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 220), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 216), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 212), f1.d);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 228), r0);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 248), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 224), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 232), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 236), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 240), r0);
    // inline leaf 0x80739880 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80739880
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80744B74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80744B90;
    }
}

loc_80744B78:
{
    // inline leaf 0x80739888 (9 guest instruction(s))
}

loc_inl1_0x80739888:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2928));
    r0 = (r4 + -11);
}

loc_inl1_0x807398A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x807398A4:
{
    r3 = 1;
    goto loc_inl1_cont_80739888;
}

loc_inl1_return:
{
}

loc_inl1_cont_80739888:
{
    // end of inlined leaf 0x80739888
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80744B80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80744B90;
    }
}

loc_80744B84:
{
    r3 = r31;
    r4 = (r31 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80744B90:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80744AF4 func_80744AF4 preserves=true fpr_mask=0x00000000
