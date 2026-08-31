#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_807F8994(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

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

    goto loc_807F8994;

loc_807F8994:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    r6 = r4;
    r7 = r5;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r4 = 32;
    MemoryInline::FlatWriteRam32((r1 + 284), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 280), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + -21948);
    MemoryInline::FlatWrite8((r3 + 400), static_cast<uint8_t>(r5));
    r3 = (r1 + 8);
    r5 = (r30 + 25);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807F89D4u;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r4 = r31;
    r3 = (r1 + 40);
    // inline leaf 0x805C2C18 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x805C2C18
    r3 = (r1 + 40);
    r4 = (r30 + 44);
    r5 = (r30 + 55);
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x807F89F8u;
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
    InvokeDirectCpu<0x805C2C60u>(ctx);
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
    r4 = (r30 + 67);
    r3 = (r31 + 168);
    ctx->lr = 0x807F8A04u;
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
    InvokeDirectCpu<0x805E8368u>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 408), r3);
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_E48 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_E48[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_E48[1]);
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
        InvokeDirectCpu<0x805CD94Cu>(ctx);
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
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2960));
    r0 = (r0 & 1);
}

loc_807F8A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807F8A30;
    }
}

loc_807F8A24:
{
    r0 = 1420;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    goto loc_807F8A3C;
}

loc_807F8A30:
{
    r3 = MemoryInline::FlatRead32((r5 + 2924));
    r0 = (r3 + 1417);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
}

loc_807F8A3C:
{
    r0 = 1447;
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    r0 = MemoryInline::FlatRead8((r5 + 36));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r0 = MemoryInline::FlatRead32((r5 + 2960));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8A54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F8AB8;
    }
}

loc_807F8A58:
{
    r3 = r31;
    ctx->lr = 0x807F8A60u;
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
    InvokeDirectCpu<0x807EC7F8u>(ctx);
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
    r0 = (r3 & 255);
    r30 = 0x809C0000u;
    r0 = (r0 * 240);
    r5 = MemoryInline::FlatRead32((r30 + -10456));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F8A7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F8A8C;
    }
}

loc_807F8A80:
{
    r0 = 1449;
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    goto loc_807F8AB8;
}

loc_807F8A8C:
{
    r3 = r31;
    ctx->lr = 0x807F8A94u;
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
    InvokeDirectCpu<0x807EC7F8u>(ctx);
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
    r0 = (r3 & 255);
    r5 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = (r0 * 240);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_807F8AAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_807F8AB8;
    }
}

loc_807F8AB0:
{
    r0 = 1450;
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
}

loc_807F8AB8:
{
    r3 = 0x809C0000u;
    r4 = 1440;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_807F8AD0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(108))) {
        goto loc_807F8B10;
    }
}

loc_807F8AD4:
{
}

loc_807F8AD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(38))) {
        goto loc_807F8AFC;
    }
}

loc_807F8ADC:
{
}

loc_807F8AE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(34))) {
        goto loc_807F8AF0;
    }
}

loc_807F8AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_807F8AE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B48;
    }
}

loc_807F8AEC:
{
    goto loc_807F8B74;
}

loc_807F8AF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_807F8AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B48;
    }
}

loc_807F8AF8:
{
    goto loc_807F8B74;
}

loc_807F8AFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(42));
}

loc_807F8B00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B74;
    }
}

loc_807F8B04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(40));
}

loc_807F8B08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B60;
    }
}

loc_807F8B0C:
{
    goto loc_807F8B74;
}

loc_807F8B10:
{
}

loc_807F8B14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(116))) {
        goto loc_807F8B38;
    }
}

loc_807F8B18:
{
}

loc_807F8B1C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(112))) {
        goto loc_807F8B2C;
    }
}

loc_807F8B20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(110));
}

loc_807F8B24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B74;
    }
}

loc_807F8B28:
{
    goto loc_807F8B60;
}

loc_807F8B2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(114));
}

loc_807F8B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B60;
    }
}

loc_807F8B34:
{
    goto loc_807F8B48;
}

loc_807F8B38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_807F8B3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B74;
    }
}

loc_807F8B40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(118));
}

loc_807F8B44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F8B60;
    }
}

loc_807F8B48:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 720));
    r4 = (r3 + 1441);
    goto loc_807F8B74;
}

loc_807F8B60:
{
    r0 = MemoryInline::FlatRead32((r5 + 2936));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r3 = (0 - r0);
    r4 = (r3 + 1446);
}

loc_807F8B74:
{
    r3 = r31;
    r5 = (r1 + 80);
    ctx->lr = 0x807F8B80u;
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
    InvokeDirectCpu<0x8063DDB4u>(ctx);
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
    r3 = (r1 + 40);
    r4 = -1;
    ctx->lr = 0x807F8B8Cu;
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
    InvokeDirectCpu<0x805C2C20u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r1 + 292));
    r31 = MemoryInline::FlatRead32((r1 + 284));
    r30 = MemoryInline::FlatRead32((r1 + 280));
    ctx->lr = r0;
    r1 = (r1 + 288);
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
// RECOMP_REGISTRATION base 0x807F8994 func_807F8994 preserves=true fpr_mask=0x00000000
