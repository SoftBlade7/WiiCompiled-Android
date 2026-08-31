#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_807263C4_statefree(uint32_t, uint32_t);
extern "C" void func_807263C4_statefree_v0(uint32_t, uint32_t);

extern "C" void func_8056F510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056F510;

loc_8056F510:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F54C;
    }
}

loc_8056F53C:
{
    r3 = r31;
    r4 = 16777216;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8056F550;
}

loc_8056F54C:
{
    r3 = 0;
}

loc_8056F550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056F554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F574;
    }
}

loc_8056F558:
{
    r3 = (r30 + 4);
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 7);
    ctx->lr = 0x8056F574u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80708B44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8056F574:
{
    r3 = r30;
    r4 = r31;
    r5 = 0;
    ctx->lr = 0x8056F584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80571D98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F58C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F5D8;
    }
}

loc_8056F590:
{
    r3 = (r30 + 4);
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807263C4u) && KnownTranslatedCpuCall<0x807263C4u>::kAvailable && !KnownTranslatedCpuCall<0x807263C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807263C4u>()) {
        func_807263C4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807263C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r30 + 4);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r29 = r3;
    r3 = (r30 + 4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    ctx->lr = 0x8056F5D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80798D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8056F5E8;
}

loc_8056F5D8:
{
    r3 = (r30 + 4);
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807263C4u) && KnownTranslatedCpuCall<0x807263C4u>::kAvailable && !KnownTranslatedCpuCall<0x807263C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807263C4u>()) {
        const auto state_free_result_807263C4_1BD0 = func_807263C4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_807263C4_1BD0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807263C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8056F5E8:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F604;
    }
}

loc_8056F5F4:
{
    r3 = r31;
    r4 = 131072;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8056F608;
}

loc_8056F604:
{
    r3 = 0;
}

loc_8056F608:
{
}

loc_8056F60C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056F640;
    }
}

loc_8056F610:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 7);
    MemoryInline::FlatWrite32((r3 + 128), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8056F640:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 67108864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F648:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F65C;
    }
}

loc_8056F64C:
{
    r3 = r31;
    r4 = 67108864;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8056F660;
}

loc_8056F65C:
{
    r3 = 0;
}

loc_8056F660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056F664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F720;
    }
}

loc_8056F668:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 7);
}

loc_8056F67C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8056F68C;
    }
}

loc_8056F680:
{
    r3 = (r30 + 4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r4 = (r4_rot_3 & 7);
    // inline leaf 0x8059197C (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 68));
    MemoryInline::FlatWrite8((r5 + 33), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8059197C
}

loc_8056F68C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056F69C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056F6B8;
    }
}

loc_8056F6A0:
{
    r3 = (r30 + 4);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_5 & 7);
    // inline leaf 0x8059197C (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 68));
    MemoryInline::FlatWrite8((r5 + 33), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8059197C
    r3 = (r30 + 4);
    // inline leaf 0x80590DE0 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80590DE0
    goto loc_8056F720;
}

loc_8056F6B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8056F6BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056F6E8;
    }
}

loc_8056F6C0:
{
    r3 = (r30 + 4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x8056F6E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806AB8A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8056F720;
}

loc_8056F6E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8056F6EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056F720;
    }
}

loc_8056F6F0:
{
    r3 = (r30 + 4);
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    r4 = 1;
    ctx->lr = 0x8056F700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805758E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r30 + 44), r0);
}

loc_8056F720:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056F510 func_8056F510 preserves=true fpr_mask=0x00000000
