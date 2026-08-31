#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AE5D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AE5D8;

loc_801AE5D8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r30 = MemoryInline::FlatRead8(r4);
    r7 = (0 - r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r27 = r3;
}

loc_801AE608:
{
    r28 = r4;
    r29 = r5;
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r31))) {
        goto loc_801AE628;
    }
}

loc_801AE618:
{
}

loc_801AE61C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_801AE628;
    }
}

loc_801AE620:
{
    r31 = 0;
    goto loc_801AE640;
}

loc_801AE628:
{
}

loc_801AE62C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (r31 + r0);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_801AE63C;
    }
}

loc_801AE638:
{
    r3 = (r31 - r0);
}

loc_801AE63C:
{
    r31 = r3;
}

loc_801AE640:
{
}

loc_801AE644:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r30))) {
        goto loc_801AE65C;
    }
}

loc_801AE648:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801AE650:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_801AE65C;
    }
}

loc_801AE654:
{
    r30 = 0;
    goto loc_801AE674;
}

loc_801AE65C:
{
}

loc_801AE660:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (r30 + r0);
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_801AE670;
    }
}

loc_801AE66C:
{
    r3 = (r30 - r0);
}

loc_801AE670:
{
    r30 = r3;
}

loc_801AE674:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r4 = (r31 * r31);
    r3 = (r30 * r30);
    r0 = (r0 * r0);
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_801AE68C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AE6D4;
    }
}

loc_801AE690:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -26224));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r3 = (r31 * r0);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = (r30 * r0);
    r4 = fctiwzword0;
    r31 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r30 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_801AE6D4:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r31));
    r11 = (r1 + 48);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r30));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AE5D8 func_801AE5D8 preserves=true fpr_mask=0x00000000
