#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806643F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806643F0;

loc_806643F0:
{
    r6 = 0x809C0000u;
    r0 = 2;
    r9 = MemoryInline::FlatRead32((r6 + 8408));
    r8 = -1;
    r7 = 0;
    ctr = r0;
}

loc_80664408:
{
    r6 = (r9 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 10528));
}

loc_80664414:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80664428;
    }
}

loc_80664418:
{
    r8 = (r8 + 1);
}

loc_80664420:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_80664428;
    }
}

loc_80664424:
{
    goto loc_806644E8;
}

loc_80664428:
{
    r7 = (r7 + 1);
    r6 = (r9 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 10528));
}

loc_80664438:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8066444C;
    }
}

loc_8066443C:
{
    r8 = (r8 + 1);
}

loc_80664444:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_8066444C;
    }
}

loc_80664448:
{
    goto loc_806644E8;
}

loc_8066444C:
{
    r7 = (r7 + 1);
    r6 = (r9 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 10528));
}

loc_8066445C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80664470;
    }
}

loc_80664460:
{
    r8 = (r8 + 1);
}

loc_80664468:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_80664470;
    }
}

loc_8066446C:
{
    goto loc_806644E8;
}

loc_80664470:
{
    r7 = (r7 + 1);
    r6 = (r9 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 10528));
}

loc_80664480:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80664494;
    }
}

loc_80664484:
{
    r8 = (r8 + 1);
}

loc_8066448C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_80664494;
    }
}

loc_80664490:
{
    goto loc_806644E8;
}

loc_80664494:
{
    r7 = (r7 + 1);
    r6 = (r9 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 10528));
}

loc_806644A4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_806644B8;
    }
}

loc_806644A8:
{
    r8 = (r8 + 1);
}

loc_806644B0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_806644B8;
    }
}

loc_806644B4:
{
    goto loc_806644E8;
}

loc_806644B8:
{
    r7 = (r7 + 1);
    r6 = (r9 + r7);
    r0 = MemoryInline::FlatRead8((r6 + 10528));
}

loc_806644C8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_806644DC;
    }
}

loc_806644CC:
{
    r8 = (r8 + 1);
}

loc_806644D4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_806644DC;
    }
}

loc_806644D8:
{
    goto loc_806644E8;
}

loc_806644DC:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664408;
    }
}

loc_806644E4:
{
    r7 = -1;
}

loc_806644E8:
{
    r0 = 12;
    r6 = 0;
    ctr = r0;
}

loc_806644F4:
{
    r0 = (r6 & 255);
    r4 = (r0 * 48);
    r5 = (r3 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 52));
}

loc_80664508:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(66))) {
        goto loc_80664510;
    }
}

loc_8066450C:
{
    goto loc_80664514;
}

loc_80664510:
{
    r0 = -1;
}

loc_80664514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80664518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066453C;
    }
}

loc_8066451C:
{
    r3 = (r3 + r4);
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r3 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8066453C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806644F4;
    }
}

loc_80664544:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806643F0 func_806643F0 preserves=true fpr_mask=0x00000000
