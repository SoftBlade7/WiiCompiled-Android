#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A7CAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A7CAC;

loc_801A7CAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 12600));
}

loc_801A7CC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801A7CE8;
    }
}

loc_801A7CCC:
{
    r0 = 0x801A0000u;
    r0_addic_src_1 = r0;
    r0 = (r0_addic_src_1 + 30160);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(30160)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A7CD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A7CE8;
    }
}

loc_801A7CD8:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 31812);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
    goto loc_801A7DE8;
}

loc_801A7CE8:
{
    r3 = 0x80000000u;
    r31 = MemoryInline::FlatRead32((r3 + 12548));
    r0 = MemoryInline::FlatRead32((r3 + 12544));
}

loc_801A7CF8:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_801A7D20;
    }
}

loc_801A7CFC:
{
    r0 = (r31 + -25165824);
}

loc_801A7D04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_801A7D20;
    }
}

loc_801A7D08:
{
    r3 = 0x81800000u;
    r4 = 25165824;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r0 = 2;
    r3 = -872415232;
    MemoryInline::FlatWrite16((r3 + 16424), static_cast<uint16_t>(r0));
}

loc_801A7D20:
{
    r0 = 25165824;
}

loc_801A7D28:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(r0))) {
        goto loc_801A7D3C;
    }
}

loc_801A7D2C:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 30540);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
    goto loc_801A7D54;
}

loc_801A7D3C:
{
    r0 = 50331648;
}

loc_801A7D44:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(r0))) {
        goto loc_801A7D54;
    }
}

loc_801A7D48:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 30668);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
}

loc_801A7D54:
{
    r3 = 0x80000000u;
    r0 = 67108864;
    r4 = MemoryInline::FlatRead32((r3 + 12572));
    r3 = MemoryInline::FlatRead32((r3 + 12576));
}

loc_801A7D68:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_801A7DB4;
    }
}

loc_801A7D6C:
{
    r0 = 0x93400000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801A7D74:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A7D88;
    }
}

loc_801A7D78:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 30796);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
    goto loc_801A7DE8;
}

loc_801A7D88:
{
    r0 = 0x93800000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801A7D90:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A7DA4;
    }
}

loc_801A7D94:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 31020);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
    goto loc_801A7DE8;
}

loc_801A7DA4:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 31244);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
    goto loc_801A7DE8;
}

loc_801A7DB4:
{
    r0 = 134217728;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801A7DBC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A7DE8;
    }
}

loc_801A7DC0:
{
    r0 = -1761607680;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801A7DC8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A7DDC;
    }
}

loc_801A7DCC:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 31416);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
    goto loc_801A7DE8;
}

loc_801A7DDC:
{
    r3 = 0x801A0000u;
    r3 = (r3 + 31640);
    // inline leaf 0x801A7C94 (6 guest instruction(s))
    r3 = (r3 & 1073741823);
    ctx->srr0 = r3;
    r3 = ctx->msr;
    r3 = (r3 & -49);
    ctx->srr1 = r3;
    // end of inlined leaf 0x801A7C94
}

loc_801A7DE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A7CAC func_801A7CAC preserves=true fpr_mask=0x00000000
