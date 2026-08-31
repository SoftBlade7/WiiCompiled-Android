#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80091090;

loc_80091090:
{
    MemoryInline::FlatWriteRam32((r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    MemoryInline::FlatWriteRam32((r1 + 380), r31);
    MemoryInline::FlatWriteRam32((r1 + 376), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 372), r29);
    r29 = r3;
    r3 = r30;
    ctx->lr = 0x800910B8u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015DF4Cu>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800910BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800910C8;
    }
}

loc_800910C0:
{
    r3 = 0;
    goto loc_800911B0;
}

loc_800910C8:
{
    r4 = (r29 + 332);
    // inline leaf 0x8015E254 (26 guest instruction(s))
}

loc_inl0_0x8015E254:
{
}

loc_inl0_0x8015E258:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x8015E27C;
    }
}

loc_inl0_0x8015E25C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26056));
}

loc_inl0_0x8015E264:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8015E27C;
    }
}

loc_inl0_0x8015E268:
{
    r7 = (r3 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -26048));
    r3_addr_1 = (r3 + r7);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r0 & -16777216);
}

loc_inl0_0x8015E278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8015E284;
    }
}

loc_inl0_0x8015E27C:
{
    r3 = 0;
    goto loc_inl0_cont_8015E254;
}

loc_inl0_0x8015E284:
{
    r3 = (r3 + r7);
    r5 = MemoryInline::FlatRead32((r13 + -25956));
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 0;
    r3 = 1;
    r5 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    MemoryInline::FlatWrite32((r4 + 48), r5);
    r5 = MemoryInline::FlatRead32((r13 + -26048));
    r5 = (r5 + r7);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 52), r5);
    MemoryInline::FlatWrite32((r4 + 56), r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_inl0_cont_8015E254:
{
    // end of inlined leaf 0x8015E254
}

loc_800910D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800910E0;
    }
}

loc_800910D8:
{
    r0 = 0;
    goto loc_80091134;
}

loc_800910E0:
{
    r0 = (r1 + 39);
    r3 = 1;
    r31 = (r0 & -32);
    MemoryInline::FlatWrite8((r29 + 392), static_cast<uint8_t>(r3));
    r4 = r31;
    r3 = (r29 + 332);
    r5 = 64;
    r6 = 0;
    r7 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015E834u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(64));
}

loc_8009110C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80091118;
    }
}

loc_80091110:
{
    r0 = 0;
    goto loc_80091134;
}

loc_80091118:
{
    r4 = r31;
    r3 = (r29 + 264);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009E6C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = (r29 + 264);
    // inline leaf 0x8009DE90 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    // end of inlined leaf 0x8009DE90
    r0 = 1;
}

loc_80091134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80091138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80091144;
    }
}

loc_8009113C:
{
    r3 = 0;
    goto loc_800911B0;
}

loc_80091144:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r31 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80091150:
{
    r0 = (r31 + 1);
    r3 = (r30 + r31);
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800911AC;
    }
}

loc_80091160:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8009116C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80091178;
    }
}

loc_80091170:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(92));
}

loc_80091174:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800911A0;
    }
}

loc_80091178:
{
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r1 + 112);
    r0 = 0;
    r4_addr_1 = (r4 + r31);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r0));
    r3 = r29;
    ctx->lr = 0x8009119Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009E610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800911AC;
}

loc_800911A0:
{
    r31 = (r31 + -1);
    r3 = (r3 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80091160;
    }
}

loc_800911AC:
{
    r3 = 1;
}

loc_800911B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 388));
    r31 = MemoryInline::FlatRead32((r1 + 380));
    r30 = MemoryInline::FlatRead32((r1 + 376));
    r29 = MemoryInline::FlatRead32((r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 384);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80091090 func_80091090 preserves=true fpr_mask=0x00000000
