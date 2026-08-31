#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_800BC3E0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800BC3E0_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_800C6990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C6990;

loc_800C6990:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C69B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C69C0;
    }
}

loc_800C69B8:
{
    r3 = 1;
    goto loc_800C6AD4;
}

loc_800C69C0:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl1_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC3F4;
    }
}

loc_inl1_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC3E0;
}

loc_inl1_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl1_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C69C8:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C6A20;
    }
}

loc_800C69D0:
{
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BC370
}

loc_800C69D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C69E4;
    }
}

loc_800C69DC:
{
    r30 = 0;
    goto loc_800C6A18;
}

loc_800C69E4:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl3_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl3_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800BC3F4;
    }
}

loc_inl3_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl3_cont_800BC3E0;
}

loc_inl3_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl3_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
}

loc_800C69EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C69F8;
    }
}

loc_800C69F0:
{
    r30 = 0;
    goto loc_800C6A18;
}

loc_800C69F8:
{
    r30 = 0;
    // inline leaf 0x800BC6C0 (8 guest instruction(s))
}

loc_inl4_0x800BC6C0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r4 = (r13 + -26976);
}

loc_inl4_0x800BC6CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x800BC6D4;
    }
}

loc_inl4_0x800BC6D0:
{
    r4 = (r3 + 6972);
}

loc_inl4_0x800BC6D4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_2 & 1);
}

loc_inl4_cont_800BC6C0:
{
    // end of inlined leaf 0x800BC6C0
}

loc_800C6A04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6A18;
    }
}

loc_800C6A08:
{
    // inline leaf 0x800BC6A0 (8 guest instruction(s))
}

loc_inl5_0x800BC6A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r4 = (r13 + -26976);
}

loc_inl5_0x800BC6AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x800BC6B4;
    }
}

loc_inl5_0x800BC6B0:
{
    r4 = (r3 + 6972);
}

loc_inl5_0x800BC6B4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r0 & 1);
}

loc_inl5_cont_800BC6A0:
{
    // end of inlined leaf 0x800BC6A0
}

loc_800C6A10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C6A18;
    }
}

loc_800C6A14:
{
    r30 = 1;
}

loc_800C6A18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800C6A1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6A28;
    }
}

loc_800C6A20:
{
    r3 = 1;
    goto loc_800C6AD4;
}

loc_800C6A28:
{
    MemoryInline::FlatWrite32((r31 + 4), r29);
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC3E0u) && KnownTranslatedCpuCall<0x800BC3E0u>::kAvailable && !KnownTranslatedCpuCall<0x800BC3E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC3E0u>()) {
        const auto state_free_result_800BC3E0_1763 = func_800BC3E0_statefree_v0(r13, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_800BC3E0_1763[0]);
        cr = static_cast<uint32_t>(state_free_result_800BC3E0_1763[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800BC3E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    ctx->lr = 0x800C6A40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C6A44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C6A4C;
    }
}

loc_800C6A48:
{
    ctx->lr = 0x800C6A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800C6A4C:
{
    r5 = MemoryInline::FlatRead32(r31);
    r3 = 131072;
    r0 = (r3 + -3616);
    r4 = 0x800C0000u;
    r5 = (r5 + 131072);
    r6 = 0;
    MemoryInline::FlatWrite16((r5 + -3618), static_cast<uint16_t>(r6));
    r4 = (r4 + 26864);
    r3 = (r31 + 120);
    r5 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r31 + 96), r5);
    MemoryInline::FlatWrite32((r31 + 100), r0);
    MemoryInline::FlatWrite32((r31 + 104), r5);
    MemoryInline::FlatWrite32((r31 + 108), r6);
    MemoryInline::FlatWrite16((r31 + 112), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r31 + 168), r4);
    ctx->lr = 0x800C6A90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0964u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 120);
    r4 = (r31 + 96);
    // inline leaf 0x801A0D8C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x801A0D8C
    r4 = 0x80000000u;
    r7 = 0x800C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + 31168);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r3 = (r31 + 120);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r6 = (r0 * 19);
    ctx->lr = 0x800C6AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x800C6AD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_800C6AD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C6990 func_800C6990 preserves=true fpr_mask=0x00000000
