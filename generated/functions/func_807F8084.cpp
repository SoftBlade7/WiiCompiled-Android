#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807F8380_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_807F8084(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807F8084;

loc_807F8084:
{
    r6 = (r1 + 10);
    // inline leaf 0x807F8320 (16 guest instruction(s))
}

loc_inl0_0x807F8320:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x807F8328:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_inl0_0x807F8348;
    }
}

loc_inl0_0x807F832C:
{
    r0 = 99;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = 59;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r3));
    r0 = 999;
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
    goto loc_inl0_cont_807F8320;
}

loc_inl0_0x807F8348:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16(r6, static_cast<uint16_t>(r0));
}

loc_inl0_cont_807F8320:
{
    // end of inlined leaf 0x807F8320
    r3 = (r31 + 412);
    // inline leaf 0x807F8360 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r3 = 999;
    r0 = (r4 + -999);
    r3 = (r4 | ~r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x807F8360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F8098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F80CC;
    }
}

loc_807F809C:
{
    r3 = (r1 + 36);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    // inline leaf 0x807F8380 (9 guest instruction(s))
    r7 = 0x808B0000u;
    r0 = 1;
    r7 = (r7 + 11588);
    MemoryInline::FlatWriteRam32(r3, r7);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r6));
    // end of inlined leaf 0x807F8380
    r3 = r31;
    r4 = (r1 + 36);
    ctx->lr = 0x807F80BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 36);
    r4 = -1;
    ctx->lr = 0x807F80C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C334u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F80CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 436));
}

loc_807F80D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F8128;
    }
}

loc_807F80D8:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F80E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8128;
    }
}

loc_807F80E4:
{
    r3 = (r1 + 24);
    r4 = 1;
    r5 = 0;
    r6 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807F8380u) && KnownTranslatedCpuCall<0x807F8380u>::kAvailable && !KnownTranslatedCpuCall<0x807F8380u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807F8380u>()) {
        const auto state_free_result_807F8380_1341 = func_807F8380_statefree(r3, r4, r5, r6);
        r0 = static_cast<uint32_t>(state_free_result_807F8380_1341[0]);
        r7 = static_cast<uint32_t>(state_free_result_807F8380_1341[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807F8380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = (r1 + 24);
    ctx->lr = 0x807F8104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 24);
    r4 = -1;
    ctx->lr = 0x807F8110u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C334u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 436), static_cast<uint8_t>(r0));
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 440), r0);
    ctx->lr = 0x807F8124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F8254;
}

loc_807F8128:
{
    r0 = MemoryInline::FlatRead8((r31 + 437));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F8134:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F813C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F8140:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_807F8148:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807F815C;
    }
}

loc_807F814C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F8150:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8158:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8254;
    }
}

loc_807F815C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 437), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x807F816Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807F8254:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F8084 func_807F8084 preserves=true fpr_mask=0x00000000
